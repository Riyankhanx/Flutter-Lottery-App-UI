#include <stdio.h>
int secondMax(int arr[],int len,int *secmax);
int main() {
    int *arr=(int*)malloc(10 *sizeof(int));

    printf("Enter 10 integers to find second largest maximum element: ");
    for (int i=0;i<10;i++){
        scanf("%d",(arr+i));
    }
    int secmax;
    int result=secondMax(arr,10,&secmax);

    if (result!=-1) {
        printf("Second maximum in the array: %d\n",secmax);
    } else {
        printf("All elements in the array are same. Second maximum not found.\n");
    }
    free(arr);

    return 0;
}
int secondMax(int arr[],int len,int *secmax) {
    if (len<2) {
        *secmax=-1;
        return -1;
    }
    int max=arr[0];
    *secmax=arr[1];

    for (int i=1;i<len;i++) {
        if (arr[i]>max) {
            *secmax=max;
            max=arr[i];
        } else if (arr[i]>*secmax&&arr[i]!=max) {
            *secmax = arr[i];
        }
    }
    return *secmax;
}
