#include<stdio.h>
#include<conio.h>
void main()
{
    // swapping two numbers using three variables
    int a,b,temp;
    printf("Enter two numbers: ");
    scanf("%d%d",&a,&b);
    printf("Before swapping: a=%d b=%d\n",a,b);
    temp=a;
    a=b;
    b=temp;
    printf("After swapping: a=%d b=%d\n",a,b);
    
    // swapping two numbers using two variables | Arithmetic operators
    printf("Before swapping: a=%d b=%d\n",a,b);
    a = a + b;
    b = a - b;
    a = a - b;
    printf("After swapping: a=%d b=%d\n",a,b);  

    // swapping two numbers using two variables | Bitwise XOR operator
    printf("Before swapping: a=%d b=%d\n",a,b);
    a = a ^ b;
    b = a ^ b;
    a = a ^ b;
    printf("After swapping: a=%d b=%d\n",a,b);
    
}