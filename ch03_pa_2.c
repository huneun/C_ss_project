#include <stdio.h>

int main(){
	
	int width;
	int height;
	int area;
	int round;
	
	printf("������ ����? ");
	scanf("%d", &width);
	
	printf("������ ����? ");
	scanf("%d", &height);
	
	area = width*height;
	round = width*2 + height*2;
	
	printf("���簢���� ����: %d\n", area);
	printf("���簢���� �ѷ�: %d", round); 
	return 0;
}
