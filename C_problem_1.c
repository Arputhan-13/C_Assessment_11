#include <stdio.h>
int main()
{
    int a;
    int *p;
    printf("Enter a number : ");
    scanf("%d", &a);
    printf("Original value : %d\n", a);
    p = &a;   
    *p = *p + 10; 
    printf("Modified value : %d\n", a);
    return 0;
}