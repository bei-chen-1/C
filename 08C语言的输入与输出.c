#include <stdio.h>

int main() {
	/*
	//�������printf()����
	int a = 10;
	double b = 3.141592;
	char c = 'A';
	printf("a = %d\n",a);
	printf("a��ֵΪ��%d\n",a);
	printf("b = %f\n",b);					//3.141592
	printf("b = %0.1f\n",b);				//3.1
	printf("b = %0.2f\n",b);				//3.14
	printf("c = %c\n",c);
	printf("c = %d\n",c);
	*/


	/*
	//�ַ��������putchar()
	char ch;
	printf("������һ���ַ���");
	scanf("%c",&ch);
	
	
	printf("ch = %c\n",ch);


	printf("ch = ");
	putchar(ch);
	printf("\n");
	*/


	/*
	//���뺯��scanf()����
	int d;
	printf("������һ��������");
	scanf("%d", &d);					//&���ڶ�ȡd���ڴ�
	printf("d = %d\n",d);
	double num1,num2,num3;
	printf("�����������ַ���");
	scanf("%lf%lf%lf",&num1,&num2,&num3);
	printf("num1=%lf,num2=%lf,num3=%lf\n",num1,num2,num3);
	*/


	/*
	//�ַ����뺯��getchar()
	char ch;
	printf("������һ���ַ���");
	ch = getchar();
    printf("ch = %c\n",ch);
	*/

	int num1;
	double num2;
	printf("��������������");
	scanf("%d %f",&num1, &num2);
	printf("num1 = %d\n", num1);
	printf("num2 = %f\n", num2);

	return 0;
}