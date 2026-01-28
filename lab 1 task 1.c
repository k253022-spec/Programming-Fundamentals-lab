#include<stdio.h>

int main(){
    float distance, fare;
    int category, time, rating;

    printf("Enter distance in km");
    scanf("%f", &distance);

    printf("Enter ride category (1 Standard, 2 Premium) ");
    scanf("%d", &category);

    printf("Enter travel time (1 Peak, 2 Non-Peak) ");
    scanf("%d", &time);

    printf("Enter customer rating (1 to 5) ");
    scanf("%d", &rating);

    if(distance <= 0){
        printf("Invalid distance");
    }
    else if(rating < 1 || rating > 5){
        printf("Invalid rating");
    }
    else{
        fare = 150;

        if(category == 1){
            fare = fare + distance * 20;
        }
        else if(category == 2){
            if(time == 1){
                if(rating < 4){
                    printf("Premium ride not allowed");
                    return 0;
                }
            }
            fare = fare + distance * 35;
        }
        else{
            printf("Invalid category");
            return 0;
        }

        if(time == 1){
            fare = fare + fare * 0.25;
        }

        printf("Final Fare = %.2f", fare);
    }

    return 0;
}
