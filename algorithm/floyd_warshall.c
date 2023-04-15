#include <stdio.h>
#include <stdlib.h>

void FloydWarshall(int ** graph, int n)
{
    int i, j, k;

    for(k=0; k<n; k++)
    {
        for(i=0; i<n; i++)
        {
            for(j=0; j<n; j++)
            {
                if(graph[i][j] > graph[i][k] + graph[k][j])
                graph[i][j] = graph[i][k] + graph[k][j];
            }
        }
    }
}
int main() {

    int i, j, m, n;
    int matrix[20][20];

    printf("enter the number of rows:\n");
    scanf("%d", &m);

    printf("enter the number of columns:\n");
    scanf("%d", &n);

    for(i=0; i<m; i++)
    {
        for(j=0; j<n; j++)
        {
            printf("enter the values in matrix [%d][%d]:\n", i+1, j+1);
            scanf("%d", &matrix[i][j]);
        }
    }
    
FloydWarshall(graph, n);

for(i=0; i<m; i++)
{
    for(j=0; j<n; j++)
    {
        printf("%d\t", matrix[i][j]);
    }
    printf("\n");
}

}
