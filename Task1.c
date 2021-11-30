#include <stdio.h>

#define MAX 100

void afisare(int matrix[MAX][MAX],int n,int m)
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            printf("%d ",matrix[i][j]);
        }
        printf("\n");
    }
}

int main()
{
    char cod[MAX];
    int matrix[MAX][MAX]={0};
    int n,m,x=0,y=0,pas=0;
    matrix[x][x]=++pas;
    scanf("%d%d",&n,&m);
    while(scanf("%s",cod))
    {
        switch(cod[0])
        {
            case 'a':
            {
                int max=0;
                int pozmax=1;
                for(int i=1;i<=4;i++)
                {
                    if(cod[i]-'0'>max)
                    {
                        max=cod[i]-'0';
                        pozmax=i;
                    }
                }
                printf("%d %d\n",max,pozmax);
                switch(pozmax)
                {
                    case 1:
                    {
                        y++;
                        matrix[x][y]=++pas;
                        break;
                    }
                    case 2:
                    {
                        x--;
                        matrix[x][y]=++pas;
                        break;
                    }
                    case 3:
                    {
                        y--;
                        matrix[x][y]=++pas;
                        break;
                    }
                    case 4:
                    {
                        x++;
                        matrix[x][y]=++pas;
                        break;
                    }
                    default:
                        printf("CEVA");
                }
                afisare(matrix,n,m);
                break;
            }
            case 'b':
            {
                
            }
        }
    }
    return 0;
}