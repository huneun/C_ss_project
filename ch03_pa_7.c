#include <stdio.h>

int main(){
	
	float input;
	float squared;
	float cubic;
	
	printf("�Ǽ�?: ");
	scanf("%f", &input);
	
	squared = input*input;
	cubic = input*input*input;
	
	printf("����: %e\n", squared); 
	printf("������: %e", cubic); 

	return 0;
}
