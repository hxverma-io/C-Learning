//print all prime number up to n using nested loop
#include <stdio.h>
int main(){
	int i = 1;
	int n = 101;
	int count = 0;
	while(i <= 101){
		int v = 1;
		while(v <= 101){
			if(i % v == 0){
			count ++;
			}
			v++;
		}
		if(count == 2){
				printf("%d " , i);
			}
		count = 0;
		i++;
	}
	






	return 0;
}
