#include<stdio.h>
int main()
{
	int num,fact,temp,r,count;
	for(int i=1;i<=num;i++)
	{
	fact=fact*i;
	temp=fact;
	while(temp>0)
	{
		r=temp%10;
		if(r==0)
		count++;
		temp=temp/10;
	}
}
}
