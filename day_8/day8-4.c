//Keep taking numbers from the user until a negative number is entered, then count how many positive numbers were intered.
#include <stdio.h>
int main(){
	int n = 1;
	int result = 0;
	int count = 0;
	do{ 
		scanf("%d" , &n);
		 if(n > 0){
			count++;
		}
		if(n < 0){
		printf("%d" , count );
		break;
		}
	
	}while(1);


	return 0;
}
