#include <stdio.h>
int main(){
    char str[1000];
    fgets(str, 1000, stdin);
    
    int count = 0;  
    int in_word = 0;

    for(int i=0; str[i]!='\0'; i++){
  
        if(str[i] != ' ' && in_word == 0){
            count++;
            in_word = 1;
        }

        else if(str[i] == ' '){
            in_word = 0;
        }
    }

    printf("There are %d words in the line", count);
    return 0;
}