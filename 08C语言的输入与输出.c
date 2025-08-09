#include <stdio.h>

int main() {
	/*
	//输出函数printf()函数
	int a = 10;
	double b = 3.141592;
	char c = 'A';
	printf("a = %d\n",a);
	printf("a的值为：%d\n",a);
	printf("b = %f\n",b);					//3.141592
	printf("b = %0.1f\n",b);				//3.1
	printf("b = %0.2f\n",b);				//3.14
	printf("c = %c\n",c);
	printf("c = %d\n",c);
	*/


	/*
	//字符输出函数putchar()
	char ch;
	printf("请输入一个字符：");
	scanf("%c",&ch);
	
	
	printf("ch = %c\n",ch);


	printf("ch = ");
	putchar(ch);
	printf("\n");
	*/


	/*
	//输入函数scanf()函数
	int d;
	printf("请输入一个整数：");
	scanf("%d", &d);					//&用于读取d的内存
	printf("d = %d\n",d);
	double num1,num2,num3;
	printf("请输入三个字符：");
	scanf("%lf%lf%lf",&num1,&num2,&num3);
	printf("num1=%lf,num2=%lf,num3=%lf\n",num1,num2,num3);
	*/


	/*
	//字符输入函数getchar()
	char ch;
	printf("请输入一个字符：");
	ch = getchar();
    printf("ch = %c\n",ch);
	*/

	int num1;
	double num2;
	printf("请输入两个数：");
	scanf("%d %f",&num1, &num2);
	printf("num1 = %d\n", num1);
	printf("num2 = %f\n", num2);

	return 0;
}