#include<iostream>
using namespace std;

void selection_sort(int arr[], int n)
{
  int swaps=0, comp=0;
  int i,j,pos,min;
  for(i=0; i<n-1; i++)
  {
    pos = i;
    min = arr[i];
    for(j=i+1; j<n; j++)
    {
      comp++;
      if(arr[j]<min)
      {
        min = arr[j];
        pos = j;
      }
    }
    if(pos!=i)
    {
      arr[pos] = arr[i];
      arr[i] = min;
      swaps++;
    }
    else
    {
      swaps++;
    }
  }
  for(i=0; i<n; i++)
  {
    cout<<arr[i]<<" ";
  }
  cout<<"\ncomparisons = "<<comp<<endl<<"swaps = "<<swaps<<endl;
}

int main()
{
  int t,n,i;
  cin>>t;
  while(t--)
  {
    cin>>n;
    int arr[n];
    for(i=0; i<n; i++)
    {
      cin>>arr[i];
    }
    selection_sort(arr,n);
  }
  return 0;
}
