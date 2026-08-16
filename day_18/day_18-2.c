//Find the minimum element in array
#include <stdio.h>
int main(){ 
    int arr[6] = {10, 25, 7, 42, 18, 3};
    int i = 0;
    int length = sizeof(arr) / sizeof(arr[0]);
    int first = arr[0];
    while(i < length){
        int temp = arr[i];
        if(first > temp){
            first = temp;
        }


        i++;
    }
    printf("%d" , first);





    return 0;
}
