#include<stdio.h>
int main()
{
    int A[1000]={0};
    int T,n,key=0,i,j,m,k=0;
    scanf("%d",&T);
    for (i = 1; i <=T; i++)
    {
        scanf("%d",&n);
        for (j = 0; j < n; j++)
        {
            scanf("%d ",&A[j]);
        }
        scanf("%d",&key);
        for ( m = 0; m < n; m++)
        {
            if(A[m]==key)
             {
             	k++;
             	break;
			 }
        }
        if(k!=0)
            printf("Present %d",key);
        else
            printf("Not Present %d",key);
        printf("\n");   
    }
    
}
