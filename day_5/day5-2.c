// Check wether the givern number is a prime number
#include <stdio.h>
int main(){
	int i = 1;
	int n = 1 ;
	int count = 0;
	while(i <= 100){
		if(n % i == 0 ){
			count ++;
		}
		i++;
		
		}
		

	if(count == 2){
		printf("%d " , n);
	}else if(count == 1){
		printf("This is not prime number");
	}else{
		printf("not primary");
	}




	return 0;
}
