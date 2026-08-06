//Check wether the given number is an Armstrong number.
#include <stdio.h>
int main(){
	int i = 1;
	int n = 152;
	int v = n;
	int no = 3;
	int digit;
	int second;
	int first;
	int last;
	int third = 0;
	do{
		digit = n % 10;
		first = digit;
		second = first * digit ;
		first = second * digit ;
		third = third + first;
		

		
		
		
		n = n / 10;
	}while(n > 0);
	if(third == v){
		printf("its an armstrong");
	}else{
		printf("It's not an armstrong");
	}


	return 0;
}
