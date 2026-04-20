#include <stdio.h>

int main()
{
    int a[5] = {1,2,3,4,5};
    int *p;
    p = &a[0]; //或p=a;
    printf("%d %d\n", *p, *(p+2));
    printf("%d %d %d\n", a[0], a[2], *(a+2));
    return 0;
}
//1 3 1 3 3