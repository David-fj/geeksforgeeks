#include <stdio.h>

int main(void){
    int n = 7;
    //int arr[] = {1,2,3,5};
    //int arr[] = {6,1,2,8,3,4,7,10,5};
    int arr[] = {2, 3, 4, 1, 6, 7};
    int gaus = (1 + n)*n/2;
    int number = arr[0];
    for(int i = 1; i < n-1; i++)
        number += arr[i];
    printf("%d %d\n", gaus, number);
    printf("%d\n", gaus-number);

    return 1;
}