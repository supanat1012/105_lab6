#include<stdio.h>
int main()
{
    int n,i,j;

    scanf("%d",&n);

    char A[n][n];

    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            A[i][j]='.';
        }
    }

    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            printf("%c",A[i][j]);
        }
        printf("\n");
    }





}
