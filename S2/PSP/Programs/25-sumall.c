#include<stdio.h>
void main(){
int i,sum=0;
for(i=1;i<=100;i++){
if(i%8!=0)
continue;
sum=sum+i;
}
printf("sum = %d",sum);
}
