#include <stdio.h>

int main(){
	int a = 17,b = 5;
	double f1,f2;
	printf("开始进行强制类型转换：\n");
	f1 = (double)a/b;
	f2 = (double)(a/b);
	printf("转换后结果:f1 = %f,f2=%f\n",f1,f1);

return 0;
}