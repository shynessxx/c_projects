#include <stdio.h>
int copy(char dest[], char src[])
{
    int i;
    for(i=0; src[i]!='\0'; i++)
        dest[i] = src[i];
    dest[i] = '\0';
    return 0;
}
int main()
{
    char src[80] = "Hello, World!";
    char dest[80];
    copy(dest, src);
    printf("Source: %s\n", src);
    printf("Destination: %s\n", dest);
    return 0;
}