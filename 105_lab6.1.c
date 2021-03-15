#include<stdio.h>
int main()
{   int a,n,i,j;

    scanf("%d",&n);

    char A[1000][1000],x[1000];

    for(i=0;i<n;i++)
    {
        scanf("%s",A[i]);
    }

    for(i=0;i<n;i++)
    {
            for(j=0;j<n;j++)
            {
                if(strcmp(A[i],A[j])==1)
                {
                    strcpy(x,A[j]);
                    strcpy(A[j],A[i]);
                    strcpy(A[j],x);
                }
            }

    }




    for(i=0;i<n;i++)
    {
        printf("%s\n",A[i]);
    }





}
