#include <string.h>
#include <stdio.h>

int main(){
	
	double pie = 3.14159265;
	
	char str[] = "pi = %.";
	char num[2];
	int i;
	char temp[30];
	
	for(i = 2; i<=10;) {
	
		strcpy(temp, str); //���ڿ� ����  
		
		if(i<9){
			sprintf(num, "%d", i); // ����ȯ  
			strcat((strcat(temp, num)), "lf\n"); //���ڿ� ��ġ�� 
		}else {
			sprintf(num, "%d", i-2);
			strcat((strcat(temp, num)), "e"); 
		}
		printf(temp, pie);
		
		temp[0] = '\0'; // �����Ǵ� ���ڿ� �ʱ�ȭ  
		i +=2;
		
	}
	
	return 0;
}
