#include <stdio.h>

void displayOdd(int start) {
    char choice;
    for (int i = 0; i < 20; i++) {
         if (choice ==23) {
            continue;
        }
        if ((start + 2 * i) % 7 == 0)
        i++; {

        }
        printf("%d ", start + 2 * i);

    }
    printf("\n");
}

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    while (1) {
        displayOdd(num);
        printf("Do you want to continue? (Y/N): ");
        char choice;
        scanf(" %c", &choice);
        if (choice ==23) {
            continue;
        }
    }

    return 0;
}
