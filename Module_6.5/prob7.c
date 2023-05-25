#include<stdio.h>

int main(){

    printf("Enter the marks for Science, cca, bahasa, english, math, history\n");

     float science, cca, bahasa, english, math, history;
    scanf("%f %f %f %f %f %f", &science, &cca, &bahasa, &english, &math, &history);
    
    float avg = (science + cca + bahasa + english + math + history);

    float avgSum = avg/6;

    printf("Average %0.2f\n", avgSum);
    return 0;
}