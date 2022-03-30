#include <string.h>
#include <stdio.h>

int main(){
	
	double pie = 3.14159265;
	
	char str[] = "pi = %.";
	char num[2];
	int i;
	char temp[30];
	
	for(i = 2; i<=10;) {
	
		strcpy(temp, str); //문자열 복사  
		
		if(i<9){
			sprintf(num, "%d", i); // 형변환  
			strcat((strcat(temp, num)), "lf\n"); //문자열 합치기 
		}else {
			sprintf(num, "%d", i-2);
			strcat((strcat(temp, num)), "e"); 
		}
		printf(temp, pie);
		
		temp[0] = '\0'; // 누적되는 문자열 초기화  
		i +=2;
		
	}
	
	return 0;
}
