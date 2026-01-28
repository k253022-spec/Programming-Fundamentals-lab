#include <stdio.h>

int main(){
    int income, employment, credit;

    printf("Enter monthly income");
    scanf("%d", &income);

    printf("Enter employment status (1=Permanent, 2=Temporary)");
    scanf("%d", &employment);

    printf("Enter credit score");
    scanf("%d", &credit);

    if(income >= 80000){
        if(employment == 1){
            if(credit >= 700){
                printf("Loan Approved");
            }else{
                printf("Loan Rejected: Low Credit Score");
            }
        }else{
            printf("Loan Rejected: Not Permanently Employed");
        }
    }else{
        printf("Loan Rejected: Low Income");
    }

    return 0;
}
