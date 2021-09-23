#include<stdio.h>
void merge(int arr[],int F,int mid,int L,int camp)
{
	int i=F,j=mid+1,k = F,temp[100],x= camp;
	while(i<=mid&&j<=L)
	{
		if(arr[i]<=arr[j])
		{
			temp[k] = arr[i];
			i++;
		}
		else
		{
			temp[k] = arr[j];
			j++;
		}
		k++;
		x++;
	}
	while(i<=mid)
	{
		temp[k] = arr[i];
		k++;
		i++;
	}
	while(j<=L)
	{
		temp[k] = arr[j];
		k++;
		j++;
	}
	i=F;
	while(i<=L)
	{
		arr[i] = temp[i];
		i++;
	}
}
void Merge(int arr[], int F, int L,int camp)
{
	int mid;
	if(F<L)
	{
		mid = (F+L)/2;
		Merge(arr,F,mid,camp);
		Merge(arr,mid + 1,L,camp);
		merge(arr,F,mid,L,camp);
		
	}
}
int main()
{
	int arr[100];
	int n,i,t,camp=0;
	scanf("%d",&t);
	while(t!=0)
	{
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("\t");
		scanf("%d",&arr[i]);
	}
	Merge(arr,0,n-1,camp);
	for(i=0;i<n;i++)
	{
		printf("%d ",arr[i]);
	}
	printf("Camparisons : %d",camp);
	t--;
}

	return 0;
}
