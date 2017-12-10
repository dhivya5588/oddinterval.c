#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,i;
scanf("%d %d",&a,&b);
for(i=a;i<=b;i++)
{
if(a%2!=0)
{
printf("%d",a);
break;
}
}
getch();
}
