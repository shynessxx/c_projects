#include <stdio.h>
int main() {
    int x;
    int t= 2;
    int sum = 0;
    printf("从键盘任意输入一个20以内的正整数\n");
    scanf("%d", &x);
    printf("你输入的数是: %d\n", x);
    
    if ( x % 2 == 0 ) {
        printf("你输入的数是一个偶数\n");
    } else {
        printf("你输入的数是一个奇数\n");
    }
    while (x >= t*t) {
        sum += (x%t == 0);
        t++;
    }
    if (sum == 0) {
        printf("你输入的数是一个质数\n");
    } else {
        printf("你输入的数不是一个质数\n");
    }
    while(x%2 == 0) {
        x /= 2;
    }
    if(x==1) {
        printf("你输入的数是一个2的幂\n");
    } else {
        printf("你输入的数不是一个2的幂\n");
    }
    return 0; 
}