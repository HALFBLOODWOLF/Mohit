#include <iostream>
#include <array>
using namespace std;
int main()
{
    int t, n, i, j, c, k;
    cin >> t;
    while (t)
    {
        c = 0;
        cin >> n;
        int a[n];
        for (i = 0; i < n; i++)
            cin >> a[i];
        for (i = 0; i < n; i++)
        {
            for (j = i + 1; j < n; j++)
            {
                for (k = j + 1; k < n; k++)
                {
                    if (a[i] + a[j] == a[k])
                    {
                        cout << i + 1 << " " << j + 1 << " " << k + 1 << endl;
                        c++;
                        break;
                    }
                    
                }
            }
        }
        if (c == 0)
            cout << "No sequence found." << endl;
        t--;
    }
    return 0;
}

