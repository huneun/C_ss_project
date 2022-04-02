#include <stdio.h>

int main(){
	
	int width;
	int height;
	int area;
	int round;
	
	printf("가로의 길이? ");
	scanf("%d", &width);
	
	printf("세로의 길이? ");
	scanf("%d", &height);
	
	area = width*height;
	round = width*2 + height*2;
	
	printf("직사각형의 넓이: %d\n", area);
	printf("직사각형의 둘레: %d", round); 
	return 0;
}
