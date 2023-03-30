#include<stdio.h>
int main()
{
    int a=100, b=200;
    int *p1, *p2;
    p1=&a;
    p2=&b;
    int temp=*p1;
    *p1=*p2;
    *p2=temp;
    printf("a: %d", a);
    printf("\nb: %d", b);
}