#include <stdio.h>
#define PI 3.1415926
float getAreaOfACircle(float a)
{	
	printf("������Բ�İ뾶��\n");

	scanf_s("%f", &a,10);

	float s ;

	s = a * a*PI;

	printf("Բ�����Ϊ%f\n", s);

	return 0;
}
float getAreaOfATriangle(float b, float h)
{
	printf("�����������εĵ׸��ߣ� \n");
	scanf_s("%f %f", &b, &h, 10, 10);
	float s;
	s = b * h / 2;
	printf("�����ε����Ϊ%f\n", s);

	return 0;
}
int main()
{
	getAreaOfACircle(5);
	getAreaOfATriangle(0,0);

	return 0;
}