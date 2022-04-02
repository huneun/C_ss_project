#include <stdio.h>

int main(){
	
	float won;
	float exchangeRate;
	float result;
	
	printf("KRW? ");
	scanf("%f", &won);

	
	printf("원/달러 환율? ");
	scanf("%f", &exchangeRate);
	
	result = won/exchangeRate;
	
	printf("KRW %.0f = USD %6.2f", won, result);
	
	return 0;
}
