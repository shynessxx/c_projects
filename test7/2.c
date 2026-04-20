#include <stdio.h>
int max(int a, int b)
{
    if(a > b) return a;
    else return b;
}

int max_common_divisor(int a, int b)
{
    int max = 1;
    for(int i =2; i<=a && i<=b; i++)
        if(a%i==0 && b%i==0) max = i;
    return max;
}
int min_common_multiple(int a, int b)
{
    int min = max(a,b);
    for(int i = min; ; i++)
        if(i%a==0 && i%b==0){
            min = i;
            break; 
        }
    return min;
}
int main()
{
    printf("输入俩数:");
    int a,b;
    scanf("%d %d",&a,&b);
    printf("最大公约数是%d\n", max_common_divisor(a,b));
    printf("最小公倍数是%d\n", min_common_multiple(a,b));
    return 0;
}