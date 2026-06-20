#include <stdio.h>
void arrange_ascend()
{
    int i;
    int *p;
    p = &i;
    for(*p=1;*p<=5;*p=*p+1)
    {
    printf("%d\n",*p);
    }
}
int main()
{
    arrange_ascend();
    return 0;
}