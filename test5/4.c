#include <stdio.h>
int main()
{
    int yamghui[10][10];
    for(int i=0; i<10; i++)  { yamghui[i][i]=1;yamghui[i][0]=1; }
    for(int i =2; i<10; i++){
        for(int j=1; j<i; j++){
            yamghui[i][j]=yamghui[i-1][j-1]+yamghui[i-1][j];
        }
    }
    for(int i=0; i<10; i++){
        for(int j=0; j<=i; j++){
            printf("%d ",yamghui[i][j]);
        }
        printf("\n");

    }
    return 0;
}