#include <stdio.h>
int max(int a, int b, int c, int d, int e)
{
    int max_val = a;
    if(b > max_val) max_val = b;
    if(c > max_val) max_val = c;
    if(d > max_val) max_val = d;
    if(e > max_val) max_val = e;
    return max_val;
}

int min_common_multiple(int a, int b,int c, int d, int e)
{
    int min = max(a,b,c,d,e);
    for(int i = min; ; i++)
        if(i%a==0 && i%b==0 && i%c==0 && i%d==0 && i%e==0){
            min = i;
            break; 
        }
    return min;
}
int main()
{
    printf("输入5个数:");
    int a,b,c,d,e;
    scanf("%d %d %d %d %d",&a,&b,&c,&d,&e);
    printf("最小公倍数是%d\n", min_common_multiple(a,b,c,d,e));
    return 0;
}