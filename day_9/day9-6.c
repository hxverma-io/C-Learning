//Print the multiplication tables for all numbers from 1 to 10
#include <stdio.h>
int main(){
	int i = 2;
	int table = 0;
	int v= 1;
	do{
		do{
			table = i * v;
			printf("%d x %d = %d \n" , i , v , table);
			v++;
		}while(v <=10);
		v = 1;
	i++;
	}while(i <= 10);
	




	return 0;
}
