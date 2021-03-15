#include<stdio.h>
#include<string.h>
int main()
{
    int n,i,j,c=0;

    scanf("%d",&n);

    char A[n][n],B[1000];

    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            A[i][j]='.';
        }
    }

    scanf("%s",&B);
        i=1;
        j=1;
   while(c<=strlen(B))
   {

       if(i>0||j>0)
       {
           if(B[c]=='U')
           {
               if(A[i][j]=='-')
               {
                   A[i][j]='+';
               }
               else
               {
                A[i][j]='|';
               }

               if(A[i-1][j]=='-')
               {
                   A[i-1][j]='+';
               }
               else
               {
                   A[i-1][j]='|';
               }
               i--;

           }
           else if(B[c]=='D')
           {
               if(A[i][j]=='-')
               {
                   A[i][j]='+';
               }
               else
               {
                A[i][j]='|';
               }

               if(A[i+1][j]=='-')
               {
                   A[i+1][j]='+';
               }
               else
               {
                   A[i+1][j]='|';
               }
               i++;
           }
           else if(B[c]=='R')
           {
               if(A[i][j]=='|')
               {
                   A[i][j]=='+';
               }
               else
               {
                   A[i][j]=='-';
               }
               if(A[i][j+1]=='|')
               {
                   A[i][j+1]=='+';
               }

               else
               {
                   A[i][j]=='-';
               }
               j++;
           }
           else if(B[c]=='R')
           {
               if(A[i][j]=='|')
               {
                   A[i][j]=='+';
               }
               else
               {
                   A[i][j]=='-';
               }

               if(A[i][j-1]=='|')
               {
                   A[i][j-1]=='+';
               }
               else
               {
                   A[i][j]=='-';
               }
               j--;
           }
       }
       else
            break;
       c++;




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
