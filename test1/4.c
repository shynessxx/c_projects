#include <stdio.h>
int main() {
    int attack = 12;
    float critical = 1.5; // 暴击倍率
    double result;
    printf("基础伤害（attack * 1.0）= %.2f\n", attack * 1.0);
    printf("暴击伤害（attack * critical）= %.2f\n",
           attack * critical);
    printf("复杂技能伤害（attack + attack * critical - 5 / attack + 3.5）= %.2f\n",
           attack + attack * critical - 5 / attack + 3.5);
    
   
    return 0;
}