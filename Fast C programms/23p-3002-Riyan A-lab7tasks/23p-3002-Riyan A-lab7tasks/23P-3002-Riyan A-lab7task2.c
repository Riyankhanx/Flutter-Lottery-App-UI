#include <stdio.h>
float Total_percentage(int , int ,int ,int ,int ,int);
int main() {
       int score1, score2, score3, score4, score5, score6;
      float percentage;
      percentage =calculatePercentage(score1, score2, score3, score4, score5, score6);
    printf("Calculated Percentage: %.2f%%\n", percentage);
    return 0;
}
float Total_percentage(int marks1, int marks2, int marks3, int smarks4, int marks5, int marks6) {
     int score1, score2, score3, score4, score5, score6;
    printf("Enter scores for 6 subjects:\n");
    printf("Subject 1:");
    scanf("%d", &score1);
    printf("Subject 2: ");
    scanf("%d", &score2);
    printf("Subject 3: ");
    scanf("%d", &score3);
    printf("Subject 4: ");
    scanf("%d", &score4);
    printf("Subject 5: ");
    scanf("%d", &score5);
    printf("Subject 6: ");
    scanf("%d", &score6);

    int tuitionFee = 150000;
    float percentage;
    float discount = 0;

    if (percentage >= 90) {
        discount = 0.9;
    } else if (percentage >= 80) {
        discount = 0.5;
    } else if (percentage >= 75) {
        discount = 0.75;
    } else {
        char isGovtServant;
        printf("Is the student a child of a government servant? (y/n): ");
        scanf(" %c", &isGovtServant);
        if (isGovtServant == 'y' || isGovtServant == 'Y') {
            discount = 0.85;
        }
    }
    float discountedFee = tuitionFee * (1 - discount);
    printf("Tuition Fee after discount: %.2f\n", discountedFee);
    int total = score1 + score2 + score3 + score4 + score5 + score6;
    return ((float)total / 600) * 100;
}