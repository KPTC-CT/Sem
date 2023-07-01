#include <stdio.h>
void main(){
int a,b,c;
printf("Enter 3 number");
scanf("%d%d%d",&a,&b,&c);
if(a<b){
if(a<c)
printf("is smallest %d",a);
else
printf("is smallest %d",b);
}
else{
if(b<c)
printf("is smallest %d",b);
else{
printf("is smallest %d",c);
}
}
}
