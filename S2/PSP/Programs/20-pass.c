#include <stdio.h>
#include <stdlib.h>
void main(){
int mark;
printf("Enter Your  mark");
scanf("%d",&mark);
if(mark>=40){
goto pass;
}else{
goto fail;
}
pass:printf("You are passed");
	exit(0);
fail:printf("You are failed");
}   
