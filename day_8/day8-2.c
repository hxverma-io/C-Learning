// find HCF of a given number
#include <stdio.h>
int main(){
	int i = 1;
	int first = 32;
	int second = 48;
	int n = 0;
	int v = 0;
	int hcf;
	int shift;
	do {
		n = first % i == 0;
		v = second % i == 0;
		if (first % i == 0 && second % i == 0)
		{
		  hcf = i;
			
		    
		    
		}
	


		i++;
		
	}while(i <= second);
	printf("%d" , hcf);

	return 0;
}
