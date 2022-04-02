#include <stdio.h>

int main(){
	
	float input;
	float squared;
	float cubic;
	
	printf("½Ç¼ö?: ");
	scanf("%f", &input);
	
	squared = input*input;
	cubic = input*input*input;
	
	printf("Á¦°ö: %e\n", squared); 
	printf("¼¼Á¦°ö: %e", cubic); 

	return 0;
}
