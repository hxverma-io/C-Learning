// Keep taking number until 0 is entered, then print the sum of all inputs;
#include <stdio.h>
int main(){
	int i = 1;
	int n = 0;
	int result;
	scanf("%d" , &result);
	do{
		scanf("%d" , &n);
		if(n != 0){
			result = result + n;
		}else{
			printf("%d " , result);
			printf("Loop is end");
			
			break;
			
		}
		i++;
		
		
	}while(1);



	return 0;
}
