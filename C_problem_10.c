#include <stdio.h>
void strcon(char *src1, char *src2, char *dst)
{
    while(*src1 != '\0')
    {
    *dst = *src1;
    src1++;
    dst++;
    }
    while(*src2 != '\0')
    {
    *dst = *src2;
    src2++;
    dst++;
    }
    *dst = '\0';
}
int main()
{
    char src1[100], src2[100], dst[200];
    printf("Enter String 1: ");
    scanf("%s", src1);
    printf("Enter String 2: ");
    scanf("%s", src2);
    strcon(src1, src2, dst);
    printf("Result: %s", dst);
    return 0;
}