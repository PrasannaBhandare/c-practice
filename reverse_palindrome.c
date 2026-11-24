#include<stdio.h>
void is_palindrom(int n);
int main()
{
int n;
printf("enter the number");
scanf("%d",&n);
is_palindrom(n);
return 0;
}
void is_palindrom(int n)
{
int temp=n;
int rev=0;
int rem;
while(temp>0)
{
rem=temp%10;
rev=(rev*10)+rem;
temp=temp/10;
}
printf("Reversed: %d\n", rev);
if(n==rev)
printf("is palindrom");
else
printf("not palindrom");
}
