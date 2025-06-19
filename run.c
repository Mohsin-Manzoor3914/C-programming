#include <stdio.h>
int main()
{
    int p=34;
    int *a =&p;
    int *q=*(&a);
    printf("%d %d",*a,*q);
}