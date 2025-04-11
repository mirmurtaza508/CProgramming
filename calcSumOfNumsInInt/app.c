#include<stdio.h>

void main(){
   int i,num,size,reminder,sum;
   printf("enter a number size :- ");
   scanf("%d",&size);
   printf("enter a number :- ");
   scanf("%d",&num);

   for(i=1;i<=size; i++){
      reminder = num % 10;
      num /= 10;
      sum += reminder;
   }
printf("sum is %d",sum);
}