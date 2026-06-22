#include <stdio.h>
void strcmp1(char *src, char *dst)
{
    while(*src != '\0' && *dst != '\0')
    {
    if(*src != *dst)
    {
    printf("Failure");
    return;
    }
    src++;
    dst++;
    }
    if(*src == '\0' && *dst == '\0')
    {
    printf("Success");
    }    
    else
    {
    printf("Failure");
    }
}
int main()
{
    char src[100], dst[100];
    printf("Enter String 1: ");
    scanf("%s", src);
    printf("Enter String 2: ");
    scanf("%s", dst);
    strcmp1(src, dst);
    return 0;
}