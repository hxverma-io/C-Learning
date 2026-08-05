//Sum of Fibonacci series
#include <stdio.h>
int main(){
	int first = 0;
	int i = 0;
	int second = 1; 
	int result = 0;
	int add = 0;
	while(i <= 10){
		printf("%d " , first);
		add = add + first;
		result = first + second ; 
		first = second;
		second = result;
		
	

		i++;
		
	}
		printf("%d " , add);






	return 0;
}
