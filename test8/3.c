#include <stdio.h>
int main()
{
    int ori_matrix[3][4]= {{1,2,3,4},{5,6,7,8},{3,9,10,2}};
    int new_matrix[4][3];
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 4; j++){
            printf("%d ",ori_matrix[i][j]);
            new_matrix[j][i] = ori_matrix[i][j];
        }
        printf("\n");
    }
    printf("转置后的矩阵:\n");
    for(int i = 0; i < 4; i++){
        for(int j = 0; j < 3; j++){
            printf("%d ",new_matrix[i][j]);
        }
        printf("\n");
    }
    return 0;
}