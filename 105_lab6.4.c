#include<stdio.h>
int main()
{
    int n,i,a,j;

    scanf("%d",&n);

    int A[n],B[n],count[n]={};

    for(i=1;i<=n;i++)
    {
        scanf("%d %d",&A[i],&B[i]);

         for(j=1;j<=n;j++)
        {
            if(A[i]==j)
            {
                count[j]++;
            }
            else if(B[i]==j)
            {
                count[j]++;
            }
        }
    }







}
