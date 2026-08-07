// Print the sum of fibonacci series
#include <stdio.h>
int main(){
	int first = 0;
	int second = 1;
	int third = 0;
	int i = 1;
	int result = 0;
	for( i = 1 ; i <= 12 ; i++	){

		result = result + first;
		third = first +  second;
		first = second ;
		second = third;
		
		}
		printf("%d " , result);




	return 0;
}
