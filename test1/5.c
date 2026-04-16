#include   <stdio.h>
int main() {
    int a = 5, b = 10, c = 5;
    int x;
    x = (a = c) && (b > a);
    printf("%d\n", x);
    x = (a == b) || (a < b);
    printf("%d\n", x);
    x = !(a == b);
    printf("%d\n", x);
    return 0;
}