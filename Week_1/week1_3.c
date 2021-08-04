#include<stdio.h>
#include<malloc.h>
#include<math.h>
int JS(int ar[], int n, int e,int * cnt)
{
	*cnt = 0;
	int jmp = sqrt(n);
	int i=0,l=jmp;
	while(l<n)
	{
		(*cnt)++;
		if(e<=ar[l])
		break;
		i = l;
		l = l+jmp;
	}
	if(l>=n)
		l=n-1;
	for(i=0;i<=l;i++)
	{
		(*cnt)++;
		if(e == ar[i])
			return i;
	}
	return -1;
}
int main()
{
	int t,i,arr[1000],m,j,ele;
	scanf("%d",&t);
	int *vals = (int *)malloc(t*sizeof(int));
	int *its = (int *)malloc(t*sizeof(int));
	for(i =0;i<t;i++)
	{
		scanf("%d",&m);
		for(j = 0;j<m;j++)
			scanf("%d",&arr[j]);
		scanf("%d",&ele);
		*(vals+i) = -1;
		*(vals+i) = JS(arr,m,ele,its+i);
	}

	for(i =0;i<t;i++)
	{
		if(i[vals] == -1)
			printf("\nNot present, %d",*(its+i));
		else
			printf("\nPresent at %d, %d",vals[i] + 1,*(its+i));
	}
	system("pause");
	return 0;
}
