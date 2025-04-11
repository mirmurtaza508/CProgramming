#include<stdio.h>

void main(){
    int a=0,b=1,c,i,num;
    printf("enter a range :- ");
    scanf("%d",&num);
    for(i=0;i<=num; i++){
        if(i == 0){
            printf("%d\n",i);
        }else{
        c = a + b;
        a = b;
        b = c;
        printf("%d\n",a);
        }
    }
}