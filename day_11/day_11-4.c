//Print square of stars 
#include <stdio.h>
int main(){
	int i = 1;
	int n = 5;
	int h = 1;
	while(i <= n){
		h = 1;
		while(h <= n){
			printf("*");
			h++;
		}
		printf("\n");
		i++;
	}



	return 0;
}
