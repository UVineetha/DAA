#include<stdio.h>
#include<ctype.h>
#include<math.h>
void main()
{
int no,orig,rem,sum=0,n=0;
char c;
printf("check whether an n digit number is armstrong or not \n ");
printf("enter the number");
scanf("%d",&no);
orig=no;
while (orig!=0)
{
orig /= 10;
++n;
}
orig=no;
while(orig!=0)
{
rem = orig % 10;
sum += pow(rem,n);
orig /= 10;
}
if(sum==no)
printf("%d is a armstrong number",no);
else
printf("%d is not a armstrong number",no);
}

