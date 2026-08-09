//for every number from 1 to n, count and print the total number of its factors
#include <stdio.h>
int main(){
	int i = 1;
	int count = 0;
	int n = 10;
	do{
		int v = 1;
		do{
			if(i % v == 0){
				count ++;
				
			}
			
			
			v++;
			
		}while(v <= n);
		printf("%d has  %d factors \n" , i , count);
		count = 0;
		i++;
	}while(i <= n);




	return 0;
}
