#include <stdio.h>

int main()
{
    int a[1000] = {0};  
    a[0] = 1;          
    int len = 1;        
    int n, i, j, carry;

    scanf("%d", &n);

    for(i = 2; i <= n; i++)
    {
        carry = 0;     
        
        for(j = 0; j < len; j++)
        {
            int product = a[j] * i + carry;
            a[j] = product % 10;   
            carry = product / 10;    
        }

        while(carry != 0)
        {
            a[len] = carry % 10;
            carry = carry / 10;
            len++;
        }
    }

    // 逆序输出（数组低位存个位，高位存最高位）
    for(i = len - 1; i >= 0; i--)
    {
        printf("%d", a[i]);
    }
    printf("\n");

    return 0;
}