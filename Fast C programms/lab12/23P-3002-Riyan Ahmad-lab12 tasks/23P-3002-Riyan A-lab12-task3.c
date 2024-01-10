#include <stdio.h>
int Total_Cakes(int *ptr,int s);
int main() {
    int cakes[6]={20,15,25,10,18,12};
    int *ptr=cakes;
    int totalCakes;
    totalCakes=Total_Cakes(ptr,6);
    printf("Total number of cakes sold per week is : %d\n",totalCakes);
    return 0;
}
int Total_Cakes(int *ptr,int s) {
    int totalCakes=0;
    for (int i=0;i<s;i++) {
        totalCakes+=*(ptr+i);
    }
    return totalCakes;
}
