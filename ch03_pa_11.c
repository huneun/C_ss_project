#include <stdio.h>

int main(){
	
//	float won;
//	float exchangeRate;
//	float result; // ���� Ÿ���� ���� ����  
	float won, exchangeRate, result;
	
	printf("KRW? ");
	scanf("%f", &won);

	
	printf("��/�޷� ȯ��? ");
	scanf("%f", &exchangeRate);
	
	result = won/exchangeRate;
	
	printf("KRW %.0f = USD %6.2f", won, result);
	
	return 0;
}
