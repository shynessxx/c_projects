/*矩阵转置*/
#include <stdio.h>
int main()
{
    int i, j, temp;
    int array[3][3]= {{100,200,300},{400,500,600},{700,800,900}};
    printf("\n原来的矩阵为：\n");
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)printf("%7d",array[i][j]);
        printf("\n");
    }
    for(i=0; i<3; i++)
    {
        for(j=0; j<i; j++)
        {
            temp=array[i][j];
            array[i][j]=array[j][i];
            array[j][i]=temp;
        }
    }
    printf("\n转置后的矩阵为：\n");
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)printf("%7d",array[i][j]);
        printf("\n");	/*输出一行后要换行*/
    }
    return 0;
}