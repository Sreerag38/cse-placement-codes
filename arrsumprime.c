#include<stdio.h>
#include<math.h>
int main()
{
    int a[10], sum=0, flag=0, i=0;
    printf("Enter array: ");
    while(i<10)
    {
        scanf("%d", &a[i]);
        i++;
    }
    i=0;
    while(i<10)
    {
        sum=sum+a[i];
        i++;
    }
    printf("Sum: %d", sum);
    for(i=2; i<sum/2; i++)
    {
        if(sum%i==0)
        {
            flag=1;
            printf("\nSum is not prime");
            break;
        }
    }
    if(flag!=1)
        printf("\nSum is prime");
}