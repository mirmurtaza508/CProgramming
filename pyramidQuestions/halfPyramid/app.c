#include<stdio.h>

void main(){
    int i,j,rows;
    printf("enter a rows number :- ");
    scanf("%d",&rows);
    
    // loop for rows
    for(i = 1; i<=rows; i++){
        // loop for columns or stars
        for(j=1;j<=i;j++){
            // print stars
            printf("*");
        }
        printf("\n");
        
    }
    for(i = 1; i<=rows; i++){
        // loop for columns or stars
        for(j=1;j<=i;j++){
            // print numbers
            printf("%d",j);
        }
        printf("\n");
        
    }
}