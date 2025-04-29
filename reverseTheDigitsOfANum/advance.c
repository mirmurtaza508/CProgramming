#include<stdio.h>

void main(){
    int i,num,reversedNum = 0,remainder;
    printf("enter a number :- ");
    scanf("%d",&num);
    printf("before reversed num = %d\n",num);
    for(i=num;i != 0; i= i / 10){
        remainder = num % 10;
        reversedNum = reversedNum * 10 + remainder;
        num = num / 10;
    }
    printf("after reversed num = %d",reversedNum);
}