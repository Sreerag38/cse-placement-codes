#include<stdio.h>
#include<string.h>
int main()
{
    char str[20];
    int n=0;
    printf("Enter string: ");
    gets(str);
    for(int i=0; str[i]!='\0'; i++)
    {
        if(str[i]=='*')
            n++;
        else
            n--;    
    }
    if(n==0)
        printf("String is valid");
    else
        printf("String invalid. Difference: %d", n);
}