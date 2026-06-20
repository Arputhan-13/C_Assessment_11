#include <stdio.h>
void increment(int *p, int n)
{
    int i;
    for(i=0;i<n;i++)
    {
    *p=*p+1;
    p++;
    }
}
int main()
{
    int a[10];
    int n, i;
    printf("Enter size: ");
    scanf("%d", &n);
    printf("Enter elements: ");
    for(i=0;i<n;i++)
    {
    scanf("%d",&a[i]);
    }
    increment(a, n);
    printf("After increment: ");
    for(i=0;i<n;i++)
    {
    printf("%d",a[i]);
    }
    return 0;
}