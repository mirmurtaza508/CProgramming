#include<stdio.h>
#include<string.h>

void main(){
    int english,urdu,math,science,socialScience,totalMarks;
    char backlog[1000] = "";
    float percentage;
  
    int maxMarks = 100;
    int mimMarks = 33;
    printf("enter marks between 0 to 100\n");
    printf("english :- ");
    scanf("%d",&english);
    printf("urdu :- ");
    scanf("%d",&urdu);
    printf("math :- ");
    scanf("%d",&math);
    printf("science :- ");
    scanf("%d",&science);
    printf("social science :- ");
    scanf("%d",&socialScience);
    // scanf("%d %d %d %d %d",&english,&urdu,&math,&science,&socialScience);
    totalMarks = english + urdu + math + science + socialScience;
     percentage = totalMarks / 500.0 * 100.0;
     if(english > 100 || urdu > 100 || math > 100 || science > 100 || socialScience > 100){
        printf("invalid marks \n");
        if(english > 100){
            printf("marks invalid 'english' = %d \n",english);
        }
        if(urdu > 100){
            printf("marks invalid 'urdu' = %d \n",urdu);
        }
        if(science > 100){
            printf("marks invalid 'science' = %d \n",science);
        }
        if(math > 100){
            printf("marks invalid 'math' = %d \n",math);
        }
        if(socialScience > 100){
            printf("marks invalid 'socialscience' = %d \n\n",socialScience);
        }
    }else{
        printf("subject        : english | urdu | math | science | socialScience\n");
        printf("marks          : %d      |  %d  |  %d  |    %d   |     %d     \n",english, urdu, math, science, socialScience);
        printf("max marks      : 500\n");
        printf("obtained marks : %d\n",totalMarks);
    }
    // printf("max per sub marks      : 100 \n");
    // printf("min per sub marks      : 33 \n");
    if(english >= 33 && english <= 100 && urdu >= 33 && urdu <= 100 && math >= 33 && math <= 100 && science >= 33 && science <= 100 && socialScience >= 33 && socialScience <= 100){
        printf("percentage     : %.2f \n",percentage);
        printf("result         : pass \n");
        if(percentage >= 95 && percentage <= 100){
            printf("grade        : A+");
        }else if(percentage >= 90 && percentage <= 94){
            printf("grade        : A");
        }else if (percentage >= 85 && percentage <= 89){
            printf("grade        : B+");
        }else if (percentage >= 75 && percentage <= 84){
            printf("grade         : B");
        }else if (percentage >= 70 && percentage <= 74){
            printf("grade        : C+");
        }else{
                printf("grade          : C");
        }

    }else if (english <= 100 && english >= 0 && urdu <= 100 && urdu >= 0 && science <= 100 && science >= 0 && math <= 100 && math >= 0 && socialScience <= 100 && socialScience >= 0){
        if(english < 33 && urdu < 33 && math < 33 && science < 33 && socialScience < 33){
            printf("percentage     : null\n");
            printf("result         : fail\n");
            printf("grade          : null\n");
        }else{
            if (english < 33) {
                strcat(backlog, "English ");
            }
            if (urdu < 33) {
                strcat(backlog, "Urdu ");
            }
            if (math < 33) {
                strcat(backlog, "Math ");
            }
            if (science < 33) {
                strcat(backlog, "Science ");
            }
            if (socialScience < 33) {
                strcat(backlog, "SocialScience ");
            }
            printf("backlogs       : %s",backlog);
        }
    
    // if(english < 33 || urdu < 33 || math < 33 || science < 33 || socialScience < 33){
    //     printf("backlogs       : %s",backlog);
    // }
    }

}