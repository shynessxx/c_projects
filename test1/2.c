#include <stdio.h>

int main() {
    int breakfast, lunch, dinner;  // 定义三餐卡路里（整数）
    
    // 提示输入
    printf("请输入早餐、午餐、晚餐摄入的卡路里（整数）：");
    scanf("%d %d %d", &breakfast, &lunch, &dinner);
    
    // 输出结果，保留两位小数
    printf("平均摄入量：%.2f 千卡\n", (breakfast + lunch + dinner) / 3.0);
    
    return 0;
}