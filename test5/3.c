#include <stdio.h>
int main()
{
    int a[4][4] = {{1,2,3,4},{3,4,5,6},{5,6,7,8},{7,8,9,10}};
    int i, j, max, l, c; /* max存放最大值，l、c分别存放行和列的下标 */
    max=a[0][0];
    for(i=0; i<4; i++){
        for(j=0; j<4; j++){
            if(max<a[i][j]){
                max=a[i][j];
                l=i;
                c=j;
            }
        }
        
    }
        

    printf("max=%d,l=%d,c=%d\n",max,l,c);
    return 0;
}