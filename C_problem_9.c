#include <stdio.h>
void intcon(int *src1, int size1, int *src2, int size2, int *dst)
{
    int i;
    for(i=0;i<size1;i++)
    {
    *dst = *(src1+i);
    dst++;
    }
    for(i=0;i<size2;i++)
    {
    *dst = *(src2+i);
    dst++;
    }
}
int main()
{
    int a[5], b[5], c[10];
    int i;
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
    intcon(a,5,b,5,c);
    printf("Concatenated Array: ");
    for(i=0;i<10;i++)
    {
    printf("%d ",c[i]);
    }
    return 0;
}