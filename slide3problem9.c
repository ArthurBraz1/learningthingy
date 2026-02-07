//4 values n1,n2,n3,n4; REFERRING to 4 grades, calculate weighed average of the grades with weights (2, 3, 4, 1) and if its greater than 7 print that you passed
// if below 5, held back, and if between 5 and 7, recalculate with a 5th grade (remedial) to check if the student passed.
#include <stdio.h>
#include <math.h>
int main(void){
    int grade1;
    int grade2;
    int grade3;
    int grade4;
    printf("Insert first grade\n");
    scanf("%i", &grade1);
    printf("Insert second grade\n");
    scanf("%i", &grade2);
    printf("Insert third grade\n");
    scanf("%i", &grade3);
    printf("Insert fourth grade\n");
    scanf("%i", &grade4);
    double average = (grade1*2 + grade2*3 + grade3*4 + grade4*1)/10;
    if (average >= 7){
        printf("you passed woohoo\n");
    }
        else if(average < 5){
            printf("You are fucked\n");
        } else {
            int remedial;
            printf("insert the grade of the remedial exam\n");
            scanf("%i", &remedial);
            double finalgrade = (remedial+average)/2;
            if(finalgrade >= 7){
                printf("You passed with a remedial exam\n");
            }else{
                printf("you actually failed totally\n");
            }

        }
    }

