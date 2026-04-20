#include <stdio.h>
int main()
{
    int *p,*sta;
    int matrix[3][4]= {{1,2,3,4},{5,6,7,8},{3,9,10,2}};
    for (int i = 0; i < 3; i++){
        for(int j = 0; j < 4; j++){
            printf("%d ",matrix[i][j]);
        }
        printf("\n");
    }
    sta = &matrix[0][0];
    for(int i = 0; i < 4; i++){
        for(int j = 0; j < 3; j++){
            printf("%d ",*(sta+j*4+i));
        }
        printf("\n");
    }
}