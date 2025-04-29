#include<stdio.h>

void main(){
    int i,size,num,reversedNum;
    printf("enter a size of number :- ");
    scanf("%d",&size);
    printf("enter a number :- ");
    scanf("%d",&num);
    printf("before reversed num = %d\n",num);
    printf("after reversed num = ");
    for(i=1;i<=size;i++){
        reversedNum = num % 10;
        num = num / 10;
        printf("%d",reversedNum);
    }
}