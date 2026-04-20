#include <stdio.h>
int const PI = 3.14;
int circumsference(int r)
{
    return 2*PI*r;
}
int area(int r)
{
    return PI*r*r;
}
int volume(int r)
{
    return 4*PI*r*r*r/3;
}
int main()
{
    int r;
    printf("input radius:");
    scanf("%d",&r);
    printf("circumsference is %d\n", circumsference(r));
    printf("area is %d\n", area(r));
    printf("volume is %d\n", volume(r));
    return 0;

}