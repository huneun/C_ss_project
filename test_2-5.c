#include <stdio.h>

int main(){
	
	char name[20]; //�ѱ� 2 character �ʿ� 
	int age;
	char gender;
	
	printf("�̸�, ����, ����(M/F) ������ �Է��ϼ���.\n");
	scanf("%s %d %c", name, &age, &gender); // �Է� ���̸� �������� �����Ѵ�.

	printf("�̸�: %s\n", name);
	printf("����: %d\n", age);
	printf("����: %c\n", gender);
	return 0;
}
