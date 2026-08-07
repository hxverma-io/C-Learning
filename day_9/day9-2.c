// Print Fibonacci Series up to the required number
#include <stdio.h>
int main(){
	int first = 0;
	int second = 1;
	int third = 0;
	int i = 1;
	for( i = 1 ; i <= 12 ; i++	){
		printf("%d " , first);
		third = first +  second;
		first = second ;
		second = third;
		}




	return 0;
}
