#include<stdio.h>
void main()
{
    char a[15];
    printf("Enter character array: ");
    gets(a);
    int len;
    len=strlen(a);
    strrev(a);
    for(int i=0; i<len; i++)
        printf("%c", a[i]);
    for(int i=0; i<len; i++)
    {
        if(a[i]=='0')
            a[i]='$';
    }
    printf("\nReversed string is:");
    for(int i=0; i<len; i++)
        printf("%c", a[i]);
}