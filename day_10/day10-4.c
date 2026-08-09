//Print the fibonacci patern row by row . where each row print the next fibonacci numbers.
#include <stdio.h>
int main(){
	int i = 1;
	int first = 0;
	int second = 1;
	int third = 0;
	int n = 5;
	while(i <= n){
		int h = 1;
		while(h <= i){
		printf("%d " , first);
	
	third = first + second;
			first = second ; 
			second = third ;
	h++;
	}
	
	
		
		printf("\n");
		i++;


	}
	




	return 0;
}
