#include<stdio.h>
void main(){
int age;
printf("Enter the Age");
scanf("%d",&age);
if(age>=1&&age<=18)
printf("The individual is a minor");
else if(age>=19&&age<=40)
printf("The individual is major");
else if(age>=41&&age<=100)
printf("The invdividul is adult");
else
printf("In valid age");
}
