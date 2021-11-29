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
    int n,m;
    scanf("%d%d",&n,&m);
    afisare(matrix,n,m);
    fgets(cod,MAX,stdin);
    printf("%s",cod);
    return 0;
}