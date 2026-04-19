#include <stdio.h>
int main() {
    int primes[100];
    int count = 0;
    for (int x=2; x<100; x++) {
        int sum = 0;
        int t = 2;
        while (x >= t*t) {
            sum += (x%t == 0);
            t++;
        }
        if (sum == 0) {
            primes[count] = x;
            count++;
        }
    }
    for(int i=0; i<count; i++) {
        printf("%d ", primes[i]);
        if(i % 10 == 9) {
            printf("\n");
        }
    }
    return 0;
}