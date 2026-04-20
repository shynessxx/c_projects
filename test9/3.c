#include <stdio.h>
int combine(int a ,int b)
{
    int m1000 = a/10;
    int m10 = a%10;
    int m100 = b/10;
    int m1 = b%10;
    return m1000*1000 + m100*100 + m10*10 + m1;
}
int main(){
    printf("%d\n", combine(45, 12));
    return 0;

}