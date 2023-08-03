#include<stdio.h>
int main()
{
    int i,n,isprime;
    printf("Enter the number between 2 to 1000: ");
    scanf("%d",&n);
    isprime=1;
    for(i=2;i<n;i++)
    {
        if(n%i==0)
        {
            isprime=0;
            break;
        }

    }
    if(isprime==0)
        printf("\n not a prime number \n");
    else
        printf("\n prime number \n");

}
