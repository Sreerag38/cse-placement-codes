#include<stdio.h>
int main()
{
    int a;
    a=100;
    int *ptr;
    ptr=&a;
    printf("\na direct: %d", a);
    printf("\na using pointer: %d", *ptr);
    printf("\nAddress of a using pointer: %p", ptr);
    printf("\nAddress of a direct: %p", &a);
}