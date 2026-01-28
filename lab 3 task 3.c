#include<stdio.h>

int main(){
    int designation, hours;
    float salary = 0;

    printf("Enter designation (1=Manager, 2=Engineer, 3=Technician)");
    scanf("%d", &designation);

    printf("Enter overtime hours");
    scanf("%d", &hours);

    if(designation == 1){
        salary = 120000;
    }else{
        if(designation == 2){
            salary = 80000;
        }else{
            if(designation == 3){
                salary = 50000;
            }
        }
    }

    if(hours <= 20){
        salary = salary + (hours * 1000);
    } else{
        salary = salary + (20 * 1000) + ((hours - 20) * 1500);
    }

    printf("Final Salary: %.2f\n", salary);

    return 0;
}
