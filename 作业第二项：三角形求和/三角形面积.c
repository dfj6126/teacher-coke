#include<stdio.h>
int main(void)
{
	int a, b, result ;
	printf("请输入三角形的底，然后点击回车：\n");
	scanf_s("%d", &a);
	printf("请输入三角形的高，然后点击回车：\n");
	scanf_s("%d", &b);
	result= (a*b)/2;
	printf("三角形的面积是是%d\n", result);
	return 0;
}