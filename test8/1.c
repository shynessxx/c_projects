#include <stdio.h>
int main()
{
    int a=100, *p1;
    float b=12.56, *p2;
    char c='A', *p3;
    char s[]="ABCDEF", *p4;

    p1=&a;
    p2=&b;
    p3=&c;
    p4=&s[0]; //或 p4=s;
    printf("%d %d\n", a, *p1);
    printf("%f %f\n", b, *p2);
    printf("%c %c\n", c, *p3);
    printf("%c %c\n", *p4, *(p4+2));
    return 0;
}