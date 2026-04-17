#include <stdio.h>
int main() {
    int x;
   printf("输入1~10之间的数字\n");
   scanf("%d", &x);
   switch(x){
    case 1:
        printf("你抽到了【大肉】！\n等级：稀有\n");
        break;
    case 2:
        printf("你抽到了【大塞雷】！\n等级：史诗 \n");
        break;
    case 3:
        printf("你抽到了【猪肛烈】！\n等级：稀有 \n");
        break;
    case 4:
        printf("你抽到了【大骚猪】！\n等级：普通 \n");
        break;
    case 5:
        printf("你抽到了【乐乐】！\n等级：史诗 \n");
        break;
    case 6:
        printf("你抽到了【大阴】！\n等级：史诗 \n");
        break;
    case 7:
        printf("你抽到了【爆塞猪】！\n等级：稀有 \n");
        break;
    case 8:
        printf("你抽到了【偶呐呐呐】！\n等级：咸鱼\n");
        break;
    case 9:
        printf("你抽到了【钢弹雷赛球】！\n等级：传说 \n");
        break;
    case 10:
        printf("你抽到了【我了雷】！\n等级：稀有 \n");
        break;
    default:
        printf("你输入的数字不在1~10之间\n");

   }
}