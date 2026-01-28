#include<stdio.h>

int main(){
    int traffic, time;

    printf("Enter traffic (1=High, 2=Low)");
    scanf("%d", &traffic);

    printf("Enter time (1=Morning/Evening, 2=Night)");
    scanf("%d", &time);

    if(traffic == 1){
        if(time == 1){
            printf("Green Signal Duration 90 seconds");
        } else {
            printf("Green Signal Duration 60 seconds");
        }
    }else{
        if(traffic == 2){
            if(time == 1){
                printf("Green Signal Duration 60 seconds");
            }else{
                printf("Green Signal Duration 30 seconds");
            }
        }
    }

    return 0;
}
