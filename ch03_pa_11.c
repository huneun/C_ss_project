#include <stdio.h>

int main(){
	
//	float won;
//	float exchangeRate;
//	float result; // 같은 타입은 한줄 선언  
	float won, exchangeRate, result;
	
	printf("KRW? ");
	scanf("%f", &won);

	
	printf("원/달러 환율? ");
	scanf("%f", &exchangeRate);
	
	result = won/exchangeRate;
	
	printf("KRW %.0f = USD %6.2f", won, result);
	
	return 0;
}
