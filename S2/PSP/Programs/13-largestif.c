#include <stdio.h>
void main()
{
int a,b,c,max;
printf("Enter 3 Numbers \n");
scanf("%d%d%d",&a,&b,&c);
max=a;
if(b>max)
max=b;
if(c>max)
max=c;
printf("Largest number is = %d",max);
}
