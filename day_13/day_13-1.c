// print numbers from 1 to 100 and stop the loop as soon as number divisible by 17 is encountered
#include <stdio.h>
int main(){
	int i = 1;
	int n = 100;
	while(i <= 100){
		if(i % 17 == 0){
			break;
		}else{
			printf("%d " , i);
			
		}
		i++;
	}




	return 0;
}
