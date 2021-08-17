#include <iostream>
#include <array>
using namespace std;
int main()
{
    int t, n, i, j, c , key;
    cin >> t;
    while (t)
    {
        c=0;
        cin >> n;
        int a[n];
        for (i = 0; i < n; i++)
            cin >> a[i];
        sort(a, a + n);
        cin >> key;
        for (i = 0; i < n; i++)
        {
            for (j = i + 1; j < n; j++)
            {
                if (a[i] + key == a[j])
                    c++;
            }
        }
        cout << c << endl;
        t--;
    }
    return 0;
}
