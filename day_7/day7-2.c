//Find and print the sum of all factors of the given number
#include <stdio.h>
int main(){
	int i = 1;
	int b = 12;
 	int result = 0;
	while(i <= b){
		if(b % i == 0) {
		   result = result + i;
		}else{
			
		}
		i++;
	}
	printf(" Sum of total factos is : %d  " , result);



	return 0;
}
