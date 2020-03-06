#include<stdio.h>
#include<math.h>
void main()
{
int a,b,c,s,area,perimeter;
printf("enter side of triangle");
scanf("%d%d%d",&a,&b,&c);
s=(a+b+c)/2;
area=sqrt(s*(s-a)*(s-b)*(s-c));
perimeter=a+b+c;
printf("area of triangle=%d",area);
printf("perimeter of triangle=%d",perimeter);
}

