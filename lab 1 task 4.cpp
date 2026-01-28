#include<stdio.h>

int main(){
    int type;
    float amount, finalAmount;

    printf("Enter customer type (1=Regular, 2=Premium)");
    scanf("%d", &type);

    printf("Enter order amount");
    scanf("%f", &amount);

    if(type == 1){
        finalAmount = amount - (amount * 0.05);
    }else{
        if(type == 2){
            finalAmount = amount - (amount * 0.10);
        }
    }

    if(finalAmount < 5000){
        finalAmount = finalAmount + 300;
    }

    printf("Final Payable Amount: %f\n", finalAmount);

    return 0;
}
