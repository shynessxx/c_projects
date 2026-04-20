#include <stdio.h>
int main()
{
    char a[80]; //存放字符
    char str;
    int i;
    int b[5] = {0}; //存放统计的个数
    gets(a);

    for(i=0; (str=a[i])!='\0'; i++)
    {
        if(str>='a' && str<='z') //统计小写字母个数
            b[0]++;
        else if(str>='A' && str<='Z')//统计大写字母个数
            b[1]++;
        else if(str>='0' && str<='9') //统计数字个数
            b[2]++;
    else if(str==' ')//统计空格个数
            b[3]++;
        else b[4]++;//统计其他字符个数
    }
    printf("小写字母:%d\n", b[0]);
    printf("大写字母:%d\n", b[1]);
    printf("数字:%d\n", b[2]);
    printf("空格:%d\n", b[3]);
    printf("其他字符:%d\n", b[4]);
    return 0;
}