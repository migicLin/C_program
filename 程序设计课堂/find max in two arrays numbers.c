#define M 4
#include <stdio.h>

/**********Begin**********/
int fun(int **p)
{
    int max = p[0][0];
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < M; j++)
        {
            if (max < p[i][j])
            {
                max = p[i][j];
            }
        }
    }
    return max;
}
/**********End**********/
int main()
{
    //int arr[2][M]={5,8,3,45,76,-4,12,82},i,j ;
    int arr[2][M], i, j;
    for (i = 0; i < 2; i++)
        for (j = 0; j < M; j++)
            scanf("%d", &arr[i][j]);
    int* p[3];
    p[0] = &arr[0][0];
    p[1] = &arr[1][0];
    p[2] = &arr[2][0];
    printf("max=%d", fun(p));
    return 0;
}
