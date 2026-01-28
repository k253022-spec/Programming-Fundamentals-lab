#include<stdio.h>

int main(){
    int program, creditHours, discipline;
    float cgpa, fee, totalFee;

    printf("Enter program (1 CS, 2 Eng, 3 Business)");
    scanf("%d", &program);

    printf("Enter credit hours");
    scanf("%d", &creditHours);

    printf("Enter CGPA");
    scanf("%f", &cgpa);

    printf("Enter discipline status (1 Clear, 2 Probation)");
    scanf("%d", &discipline);

    if(program == 1){
        fee = 8000;
    }
    else if(program == 2){
        fee = 9000;
    }
    else if(program == 3){
        fee = 7000;
    }
    else{
        printf("Invalid program");
        return 0;
    }

    totalFee = fee * creditHours;

    if(creditHours > 18){
        totalFee = totalFee + 15000;
    }

    if(discipline == 1){
        if(cgpa >= 3.7){
            totalFee = totalFee - totalFee * 0.50;
        }
        else if(cgpa >= 3.3){
            totalFee = totalFee - totalFee * 0.25;
        }
    }

    printf("Final Semester Fee = %.2f", totalFee);

    return 0;
}
