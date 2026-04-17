#include <stdio.h>
int rhombus(void){
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
int main() {
    int key = 520;
    int a ,sum=0;
    do{
        printf("请输入密码：");
        scanf("%d",&a);
        if (a == key) {
            printf("请再次输入密码：");
            scanf("%d",&a);
            if (a == key) {
                rhombus();
                return 0;
            }
        }
        sum += (a != key);
    }while(sum != 5);
    printf("已冻结");
    return 0;
}