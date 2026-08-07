//Calculate and print the sum of even digits and the sum of odd digits of the given number 
#include <stdio.h>
int main(){
	int first = 0;
	int n = 0;
	int even = 0;
	int odd = 0;
	scanf("%d" , &n);
	do{
		
		first = n % 10;
		if(first % 2 == 0){
			even = even + first; 
		}else{
			odd = odd + first;
		}
		n = n/ 10;
		
	}while(n > 0);
	printf("Even : %d\n" , even);
	printf("Odd : %d\n" , odd);



	return 0;
}
