#include<stdio.h>

int main(){
    int role, experience;

    printf("Enter role (1=Professor, 2=Lecturer)");
    scanf("%d", &role);

    printf("Enter years of experience");
    scanf("%d", &experience);

    if(role == 1){
        if(experience >= 5){
            printf("Assigned to Main Hall");
        }else{
            printf("Assigned to Classrooms");
        }
    }else{
        if(role == 2){
            if(experience >= 3){
                printf("Assigned to Classrooms");
            }else{
                printf("Assist Senior Invigilators");
            }
        }
    }

    return 0;
}
