#include <stdio.h>
int main() {
    int x = 2025210807;
    int prime,sum=0;
    for (int prime = x-1; prime > 0; prime--) {
        int sum = 0;
        for (int t = 2; t * t <= prime; t++) {
            if (prime % t == 0) {
                sum++;
                break;
            }
        }
        if (sum == 0) {
            printf("找出小于你学号的最大素数是%d\n", prime);
                break;
        }
        }
    return 0;
}