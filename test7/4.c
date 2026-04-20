#include <stdio.h>
int main()
{
    int a[10];
    for (int i =0;i<10;i++){
        scanf("%d",&a[i]);

    }
    int min = a[0];
    int max = a[0];
    for (int i =0;i<10;i++){
        printf("%d ",a[i]);
        if (a[i] < min) {
            min = a[i];
        }
        if (a[i] > max) {
            max = a[i];
        }
    }
    printf("\n最小值: %d\n", min);
    printf("最大值: %d\n", max);
    return 0;
}