#include <stdio.h>
void find_2digit_odd_sum7()
{
    int a, b, c, d;
    int *p = &a;
    *p = 10;
    while(*p<100)
    {
    if(*p%2==1)
    {
    b=*p%10;
    c=(*p/10)%10;
    d=b+c;
    if(d==7)
    {
    printf("%d\n",*p);
    }
    }
    *p=*p+1;
    }
}
int main()
{
    find_2digit_odd_sum7();
    return 0;
}