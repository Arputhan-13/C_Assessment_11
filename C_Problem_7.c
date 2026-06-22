#include <stdio.h>
void memcomp(int *src, int *dst, int size)
{
    int i;
    for(i = 0; i < size; i++)
    {
    if(*(src+i) != *(dst+i))
    {
    printf("Failure");
    return;
    }
    }
    printf("Success");
}

int main()
{
    int a[5], b[5], i;
    printf("Enter Array 1: ");
    for(i=0;i<5;i++)
    {
    scanf("%d",&a[i]);
    }    
    printf("Enter Array 2: ");
    for(i=0;i<5;i++)
    {
    scanf("%d",&b[i]);
    }    
    memcomp(a,b,5);
    return 0;
}