//Find an element in array
#include <stdio.h>
int main(){
    int arr[5] = {10 ,42, 90, 9, 40};
    int length = sizeof(arr) / sizeof(arr[0]);
    int number  = 0;
    int found = 0;
    int i = 1;
    printf("enter number you want to search : ");
    scanf("%d" , &number);
    while(i < length){
        if(arr[i] == number){
            printf("%d : %d\n" , i+1,arr[i]);
            found ++;
            break;
        }
        i++;
    }
    if(found == 0){
        printf("No value found\n");
    }






    return 0;
}
