#include "utils.h"

void SolveTask1() {
    char cod[MAX], *p = NULL;
    int matrix[MAX][MAX] = { 0 };
    int n = 0, m = 0, x = 0, y = 0, pas = 0;
    matrix[x][y] = ++pas;
    scanf("%d%d\n", &n, &m);
    fgets(cod, MAX, stdin);
    addNull(cod);
    p = strtok(cod, " ");
    while(p)
    {
        switch(p[0])
        {
            case 'a':
            {
                int max = 0;
                int pozmax = 1;
                for(int i = 1; i <= 4; i++)
                {
                    if(p[i] - '0' > max)
                    {
                        max = p[i] - '0';
                        pozmax = i;
                    }
                }
                switch(pozmax)
                {
                    case 1:
                    {
                        y++;
                        matrix[x][y] = ++pas;
                        break;
                    }
                    case 2:
                    {
                        x--;
                        matrix[x][y] = ++pas;
                        break;
                    }
                    case 3:
                    {
                        y--;
                        matrix[x][y] = ++pas;
                        break;
                    }
                    case 4:
                    {
                        x++;
                        matrix[x][y] = ++pas;
                        break;
                    }
                    default:
                        printf("CEVA");
                }
                break;
            }
            case 'b':
            {
                int k = strlen(p) - 1;
                int X = (p[k-1] - '0') * 10 + (p[k] - '0');
                int primm = prim(X);
                int palindrom = 1;
                for(int i = 1; i <= k / 2 ; i++)
                {
                    if(p[i] != p[k - i + 1])
                    {
                        palindrom = 0;
                        break;
                    }    
                }
                if(primm == 1 && palindrom == 1)
                {
                    y--;
                    matrix[x][y] = ++pas;
                }
                else if(primm == 1 && palindrom == 0)
                {
                    x--;
                    matrix[x][y] = ++pas;
                }
                else if(primm == 0 && palindrom == 1)
                {
                    y++;
                    matrix[x][y] = ++pas;
                }
                else if(primm == 0 && palindrom == 0)
                {
                    x++;
                    matrix[x][y] = ++pas;
                }
                break;
            }
            case 'c':
            {
                int ln = p[1] - '0';
                int k = p[2] - '0';
                int S = 0;
                for(int i = 0, j = 1; j <= k; i += k, j++)
                {
                    if(i >= ln)
                        i = i % ln;
                    S += (p[i + 3] - '0');
                }
                S = S % 4;
                switch(S)
                {
                    case 0:
                    {
                        y--;
                        matrix[x][y] = ++pas;
                        break;
                    }
                    case 1:
                    {
                        x--;
                        matrix[x][y] = ++pas;
                        break;
                    }
                    case 2:
                    {
                        y++;
                        matrix[x][y] = ++pas;
                        break;
                    }
                    case 3:
                    {
                        x++;
                        matrix[x][y] = ++pas;
                        break;
                    }
                    default: printf("Hello, World!");
                }
                break;
            }
            default: printf("Hi!");
        }
	p = strtok(NULL, " ");
    }
    afisare(matrix, n, m);
}

void afisare(int matrix[MAX][MAX], int n, int m) {
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
        {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}

int prim(int x) {
    if(x < 2){
        return 0;
    }
    if(x == 2){
        return 1;
    }
    if(x % 2 == 0){
        return 0;
    }
    for(int d = 3; d * d <= x; d += 2){
        if(x % d == 0){
            return 0;
        }
    }
    return 1;
}