#include <stdio.h>
#define PI 3.1415926
float getAreaOfACircle(float a)
{	
	printf("请输入圆的半径：\n");

	scanf_s("%f", &a,10);

	float s ;

	s = a * a*PI;

	printf("圆的面积为%f\n", s);

	return 0;
}
float getAreaOfATriangle(float b, float h)
{
	printf("请输入三角形的底跟高： \n");
	scanf_s("%f %f", &b, &h, 10, 10);
	float s;
	s = b * h / 2;
	printf("三角形的面积为%f\n", s);

	return 0;
}
int main()
{
	getAreaOfACircle(5);
	getAreaOfATriangle(0,0);

	return 0;
}