//Case-Insensitive string search in array
#include <stdio.h>
#include <string.h>
int main(){
    char character[5][50] = {"itachi" , "goku" , "Aizen" , "Sasuke" , "Orochimaru"};
    int found = 0;
    char findcharacter[50];
    int length = sizeof(character) / sizeof(character[0]);
    int i = 0;
    scanf("%s" , findcharacter);
    while(i < length){
        if(strcasecmp(character[i] , findcharacter) == 0){
            printf("%d : %s" , i+1,character[i]);
            found++;
        }
        i++;
    }
    if(found == 0){
        printf("Not found");
    }







    return 0;
}