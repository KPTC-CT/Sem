#include <stdio.h>
void main(){
int a,b,c;
printf("Enter 3 number");
scanf("%d%d%d",&a,&b,&c);
if(a>b){
if(a>c)
printf("is greatest %d",a);
else
printf("is greatest %d",b);
}
else{
if(b>c)
printf("is greatest %d",b);
else{
printf("is greatest %d",c);
}
}
}
