#include <stdio.h>
 
#define MAT_MAX 1000
 
int main(void)
{
    int n, m;
    int i, j;
    int mat[MAT_MAX][MAT_MAX];
    int wally = 1111;
    int counter=0;
 
    scanf("%d %d", &n, &m);
 
    for(i=0 ; i<n ; i++)
    {
        for(j=0 ; j<m ; j++)
        {
            scanf("%d", &mat[i][j]);
        }
    }
 
    for(i=0 ; i<n ; i++)
    {
        for(j=0 ; j<m ; j++)
        {
            if(mat[i][j]==wally)
            {
                if(i-1==-1)
                {
                    if(j-1==-1)
                    {
                        if(mat[i+1][j]==8 && mat[n-1][j]==4 && mat[i][j+1]==0 && mat[i][m-1]==0)
                        {
                            printf("%d %d\n", i, j);
                            counter++;
                        }
                    }
                    else if(mat[n-1][j]==4 && mat[i+1][j]==8 && mat[i][j-1]==0 && mat[i][j+1]==0)
                    {
                        printf("%d %d\n", i, j);
                        counter++;
                    }
                }
                if(i+1==n)
                {
                    if(j+1==n)
                    {
                        if(mat[0][j]==8 && mat[i-1][j]==4 && mat[i][0]==0 && mat[i][j-1]==0)
                        {
                            printf("%d %d\n", i, j);
                            counter++;
                        }
                    }
                    else if(mat[0][j]==8 && mat[i-1][j]==4 && mat[i][j+1]==0 && mat[i][j-1]==0)
                    {
                        printf("%d %d\n", i, j);
                        counter++;
                    }
                }
                if(j-1==-1)
                {
                    if(mat[i+1][j]==8 && mat[i-1][j]==4 && mat[i][m-1]==0 && mat[i][j+1]==0)
                    {
                        printf("%d %d\n", i, j);
                        counter++;
                    }
                }
                if(j+1==m)
                {
                    if(mat[i+1][j]==8 && mat[i-1][j]==4 && mat[i][0]==0 && mat[i][j-1]==0)
                    {
                        printf("%d %d\n", i, j);
                        counter++;
                    }

                }
                if(mat[i+1][j]==8 && mat[i-1][j]==4 && mat[i][j+1]==0 && mat[i][j-1]==0 && counter==0)
                {
                    printf("%d %d\n", i, j);
                    counter++;
                }
            }
            else if(i+1==n && j+1==m && counter==0)
            {
                printf("WALLY NAO ESTA NA MATRIZ\n");
            }
        }
    }
 
    return 0;
}