#include <stdio.h>
int max(int a, int b)
{
    if(a > b) return a;
    else return b;
}
int main()
{
    int a,b;
    printf("input 2 number:");
    scanf("%d %d",&a,&b);
    printf("max is %d\n", max(a,b));
    return 0;
}