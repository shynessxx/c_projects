#include <stdio.h>
int main()
{
    int stu[3][4], i, j, t[3];
    float sum=0,a[3];
    for(i=0; i<3; i++)  
        for(j=0; j<4; j++)
            scanf("%d",&stu[i][j]);
    for(i=0; i<3; i++)
    {
        t[i]=0;
        for(j=0; j<4; j++)
        {
        sum+=stu[i][j];
            t[i]+=stu[i][j];
        }
        printf("%-6d",t[i]);
        a[i]=t[i]/4.0;
        printf("%-6.2f\n",a[i]);
    }
    printf("average = %.2f\n",sum/12.0);
    return 0;
}