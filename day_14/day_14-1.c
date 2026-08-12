//Take 5 numbers as input , and skip all number that is divisible by 5 and continue printing rest
#include <stdio.h>
int main(){	
	int i = 1;
	int n = 100;
	int remain;
	while(i <= n){
		if(i % 5 == 0){
			remain = remain + i;
			i++;
			continue;
		}
		printf("%d " , i);
		i++;
	}
	printf("\n%d " ,remain);


	return 0;
}
