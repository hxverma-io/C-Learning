// Keep taking number from the user until 0 is entered , then print the largest number among all inputs.
#include <stdio.h>
int main(){
	int i = 1; // hamne i ki value 1 di 
	int n = 0; // hamne n ki value 0 di
	int digit = 0; // hamne digit ki value 0 di
	int high = 0; // hamne high ki value 0 di
	int not;
	scanf("%d" , &digit); // scan f select kiya jisse digit me no ja sake
	do{
		scanf("%d" , &high); //scanf select kiya taki high me no ja sake
		if(high != 0){   // agar high 0 ke barabar nahi hai to ye wala function chalega
			if(digit <  high){
				digit = high;
			}else{
								
			}
			
		}else{
			printf("%d " ,digit);
			break;
		}
		
	}while(1);




	return 0;
}
