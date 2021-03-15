#include<stdio.h>
int main()
{
    int n,i,a,j,max=0,x,y;

    scanf("%d",&n);

    int A[n],B[n],count[1000]={0},min=n;

    for(i=1;i<=n;i++)
    {
        scanf("%d %d",&A[i],&B[i]);

        for(j=1;j<=n;j++)
         {
            if(A[i]==j)
            {
                count[j]++;
               // printf("%d-%d = %d\n",A[i],j,count[j]);
            }
            if(B[i]==j)
            {
                count[j]++;
                //printf("%d-%d-=%d\n",B[i],j,count[j]);
            }
         }
    }








    for(i=1;i<=n;i++)
    {
        if(max<count[i])
        {
            y=i;
            max=count[i];
        }
        else if(min>count[i])
        {
            x=i;
            min=count[i];
        }

    }
    printf("\n%d %d",y,x);




}
