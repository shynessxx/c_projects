#include <stdio.h>
int main() {
    int i,j;
    int a;
    for(i=0;i<5;i++){
        if(i<=2) a = i;
        else a = 4 - i;
        for(j=0;j<(2-a);j++){
            printf(" ");
        }
        for(j=0;j<(a*2+1);j++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}