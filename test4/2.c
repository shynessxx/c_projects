#include <stdio.h>
int main(){
    int temp;
    int a[5]={5,4,3,2,1};
    for(int j=0;j<5;j++){
        int minindex=j;
        for(int i=j;i<5;i++){
            if (a[minindex] > a[i]){
                minindex=i;
            }
        }
        temp = a[minindex];
        a[minindex]=a[j];
        a[j]=temp;
    }
    for(int i=0;i<5;i++){
        printf("%d ",a[i]);
    }
    return 0;
}