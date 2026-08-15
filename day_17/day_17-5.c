// average of array
#include <stdio.h>
int main(){
    int arr[5] = {10,20,30,40,50};
    int length = sizeof(arr) / sizeof(arr[0]);
    int i = 0;
    int sum = 0;
    while(i < 5){
        printf("%d " , arr[i]);
        sum = sum + arr[i];
        i++;
    }
    int average = sum / length ;
    printf("%d" , average);





    return 0;
}