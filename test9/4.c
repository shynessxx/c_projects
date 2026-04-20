#include <stdio.h>
int main()
{
    printf("输入一个整数:");
    int n;
    long long product = 1;
    scanf("%d",&n);
    for(int i = n; i >= 1; i--){
        product *= i;
    }
    printf("n的阶乘是%lld\n", product);
    return 0;
}