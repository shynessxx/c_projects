#include <stdio.h>
int main()
{
    int a,b,c;
    for(int n=100; n<1000; n++){
        int sum = 0;
        a = n/100;
        b = (n%100)/10;
        c = n%10;
        sum = a*a*a + b*b*b + c*c*c;
        if(sum == n) printf("%d ", n);
    }
    return 0;
}

