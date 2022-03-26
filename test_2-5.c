#include <stdio.h>

int main(){
	
	char name[20]; //한글 2 character 필요 
	int age;
	char gender;
	
	printf("이름, 나이, 성별(M/F) 순으로 입력하세요.\n");
	scanf("%s %d %c", name, &age, &gender); // 입력 사이를 공백으로 구분한다.

	printf("이름: %s\n", name);
	printf("나이: %d\n", age);
	printf("성별: %c\n", gender);
	return 0;
}
