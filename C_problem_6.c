#include <stdio.h>
void strcpy1(char *src, char *dst)
{
    while(*src != '\0')
    {
    *dst = *src;
    src++;
    dst++;
    }
    *dst = '\0';
}

int main()
{
    char src[100], dst[100];
    printf("Enter Source String: ");
    scanf("%s", src);
    strcpy1(src, dst);
    printf("Copied String: %s", dst);
    return 0;
}