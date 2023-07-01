#include <stdio.h>
void main(){
int a,b,c;
char opr;
printf("Enter an operator + or - or * or /  \n");
scanf("%c",&opr);
printf("Enter any two number");
scanf("%d%d",&a,&b);
switch(opr){
case'+':
c=a+b;
printf("Resut = %d",c);
break;

case'-':
c=a-b;
printf("Result = %d",c);
break;

case'*':
c=a*b;
printf("Result = %d",c);
break;

case'/':
c=a/b;
printf("Result = %d",c);

default:
printf("Invalid operator");
}
}
