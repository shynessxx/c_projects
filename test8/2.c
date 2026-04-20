#include <stdio.h>
int swap(int *a, int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
    return 0;
}
int main()
{
    int a ,b,c;
    scanf("%d %d %d",&a,&b,&c);
    if(a>b) swap(&a, &b);
    if(a>c) swap(&a, &c);
    if(b>c) swap(&b, &c);
    printf("从小到大排序: %d %d %d\n", a, b, c);
    return 0;
}
