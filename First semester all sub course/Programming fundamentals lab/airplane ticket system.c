#include <stdio.h>

void Reserve_seat(int arr[16][16], int rows, int cols, int row, int seat) {
    if (row < rows && seat < cols && arr[row][seat] == 0) {
        arr[row][seat] = 1;
        printf("Seat reserved successfully.\n");
    } else {
        printf("Invalid  row or seat number.Please try again.\n");
    }
}
int main() {
    int arr[16][16] = {
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0}
    };

    int rows = sizeof(arr) / sizeof(arr[0]);
    int cols = sizeof(arr[0]) / sizeof(arr[0][0]);

    int choice;
    printf("1. Reserve a seat\n");
    printf("2. Check if a seat is reserved\n");
    printf("3. Quit\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    while (choice != 3) {
        if (choice == 1) {
            int row, seat;
            printf("Enter the row  and seat number to reserved(0 0 to stop): ");
            scanf("%d %d", &seat, &row);
            Reserve_seat(arr, rows, cols, row, seat);
        } else if (choice == 2) {
            int row, seat;
            printf("Enter the row number and seat number: ");
            scanf("%d %d",&row,&seat);
            if (arr[row][seat] == 0) {
                printf("Seat is not reserved.\n");
            } else {
                printf("Seat is reserved.\n");
            }
        }
        printf("Enter your choice: ");
        scanf("%d", &choice);
    }

    return 0;
}