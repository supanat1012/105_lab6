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

            if(strcmp(A[i],A[i+1]==1))
            {
                strcpy(x,A[i+1]);
                strcpy(A[i+1],A[i]);
                strcpy(A[i],x);
            }

    }




    for(i=0;i<n;i++)
    {
        printf("%s\n",A[i]);
    }





}
