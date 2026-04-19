#include <stdio.h>
int main(){
    char str[1000];
    fgets(str, 1000, stdin);
    char new_str[1000];
    int j = 0;
    for (int i = 0 ; str[i] != '\0'; i++) {
       if(str[i] != 'e'){
           new_str[j] = str[i];
           j++;
       }
    }
    new_str[j] = '\0';
    printf("%s", new_str);
    return 0;
}