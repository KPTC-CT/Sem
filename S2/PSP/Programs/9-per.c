#include<stdio.h>
void main() {
int a,b,c,d,e;
float total,per,g;

printf("Maths");
scanf("%d",&a);

printf("Physics");
scanf("%d",&b);

printf("Chemistry");
scanf("%d",&c);

printf("Biology");
scanf("%d",&d);

printf("Computer");
scanf("%d",&e);

total=a+b+c+d+e;
per=total/500;
g=per*100;
printf("Resut = %f",g);
}
