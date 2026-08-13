//Traverse the array
#include <stdio.h>
int main(){
    int arr[] = {21,32,52,42,62,52,42,52,62};
    int length = sizeof(arr) / sizeof(arr[0]);
        for(int i = 0 ; i < length ; i++){
        printf("%d " , arr[i]);
    } 


    return 0;
}