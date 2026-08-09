//Print all possible pairs (i,j) where both i and j range from 1 to n
#include <stdio.h>
int main(){
	int i = 1;
	int v = 1;
	do{
		v = 1;
		printf("\n%d =  " , i); // sabse pehle 1 print hua  // fir two print hua 
		do{
			printf("%d " , v);  // fir 1 print hua // fir 2 pint hua // fir 3 print hua 
			v++;               // 1 increase hua // 1 increase hua  // 1 increase hua 
		}while( v <= 3);   //cmd dekhi  //cmd dekhi cmd dekhi done ho gaya 
	
		i++;           // i me 1 add ho gaya 
	}while(i <= 3);   // i 3 ke barabar hona chaiye 



	return 0;
}
