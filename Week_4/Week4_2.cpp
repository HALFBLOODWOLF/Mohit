#include<stdio.h>
int Qcon(int arr[],int F,int L)
{
	int i,temp;
	int p = arr[L];
	int j = F-1;
	for(i = F;i<L;i++)
	{
		if(arr[i]<=p)
		{
			j++;
			temp = arr[i];
			arr[i] = arr[j];
			arr[j] = temp;
		}
	}
	temp = arr[L];
	arr[L] = arr[j+1];
	arr[j+1] = temp;
	return j+1;
}
void Qdivide(int arr[], int F, int L)
{
	int i;
	if(F<L)
	{
		int ind = Qcon(arr,F,L);
		Qdivide(arr,F,ind-1);
		Qdivide(arr,ind+1,L);
	}
}
int main()
{
	int arr[100],i,n,tc,j;
	scanf("%d",&tc);
	for(i=0;i<tc;i++)
	{
	scanf("%d",&n);
	printf("\nEnter the elements:\n");
	for(j=0;j<n;j++)
	{
		scanf("%d",arr+j);
	}
	Qdivide(arr,0,n-1);
	printf("\n");
	for(i=0;i<n;i++)
	{
		printf("%d ",arr[i]);
	}
}
	return 0;
}
