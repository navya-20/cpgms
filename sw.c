#include<stdio.h>
int main()
{
int a,b,c;
int ch;
printf("enter a and b value");
scanf("%d%d",&a,&b);
printf("enter choice");
scanf("%d",&ch);
switch (ch)
{
case 1:printf("sum=%d\n",a+b);break;
case 2:printf("sub=%d\n",a-b);break;
default :printf("invalid operator\n");
}
}
