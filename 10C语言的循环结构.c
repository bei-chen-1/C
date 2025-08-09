
#include <stdio.h>

int main () {
	/*
	循环结构：满足一定条件下，程序反复（循环）执行某一段代码，直到不满足该条件，循环执行结束
	
	1、for循环
		格式：for(初始化语句；循环判断条件；迭代语句) {
			  ...循环体语句...
		}
		
		EG1:
		//打印0-5之间所有整数
		int i;
		for(i = 0; i <= 5; i++) {
			printf("i = %d\n", i);
		}

		EG2:
		int k,sum = 0;
		for(k = 1; k <= 100; k++) {
			sum += k;
		}
		printf("1+2+3+...+100 = %d\n", sum);

		EG3:
		// 计算...到...和
		int k,k1,k2,sum = 0;
		printf("请输入初始值：");
		scanf("%d",&k1);
		printf("请输入终止：");
		scanf("%d",&k2);
		if(k1 < k2){	
			for(k = k1; k <= k2; k++) {
				sum += k;
			}
		}else{
			printf("初始值不能小于终止值！");
		}
		printf("%d+...+...+%d = %d\n",k1,k2,sum);

		EG4:
		输出以下图案:*****
		int i;
		for (i = 0; i <= 4; i++) {
			printf("* ");
		}
		printf("\n");

		EG5:
		//一定要避免死循环！！
		//循环判断条件设置错误
		int m;
		for(m = 1; m > 0; m++) {
			printf("m = %d\n", m);
		}

		//循环判断条件一定要写
		//循环判断条件未设置
		int m;
		for(m = 0; ;m++) {
			printf("m = %d\n", m);
		}

	2、while循环
       格式：初始化语句;
			while(循环判断条件) {
				...循环体语句...
			迭代语句;
         }


		// 使用while循环编程1+2+3+......+100
		int i = 1, sum = 0;
		while(i <= 100) { 
			sum += i; // sum = 1+2+3+4+5+...+98+99+100
			i++; // 101
		}
		printf("1+2+3+......+100 = %d\n", sum);

	3、do-while循环
	   格式：初始化语句;
			 do {
			   ...循环体语句...
			   迭代语句;
			 }while(循环判断条件);

		// 使用do-while循环编程1+2+3+......+100
		int i = 1;
		int sum = 0;
		do{
			sum += i; // sum = 1+2+3+4+...+99+100
			i++; // 101
		}while(i <= 100);
		printf("1+2+3+......+100 = %d\n", sum);



		int i =1,sum = 0;
		while(i <= 100) {
			sum = sum+ i;
			i = i + 1;
		}
		printf("1+2+3+...+100: %d\n",sum);



			int i = 0;
		do {
			printf("请输入初始值：");
			scanf("%d",&i);
		}while(i != 0);
	
	
	4、 for循环嵌套：一个for循环结构的循环体中放着另一个for循环结构，共同构成for循环嵌套
		格式：for() {
				  for() {
		  
				  }
			  }
	
		for循环嵌套案例
			案例1：
			输出以下图形：
			*****
			*****
			*****
		int i, j;
		for(i = 0; i < 3; i++) {//外循环:控制输出每一个行
			for(j = 0; j < 5; j++) {//内循环：控制输出每一行中的每一颗*
				printf("* ");
			}
			printf("\n");
		}	
			


			案例2：
			输出以下图形：
			1
			12
			123
			1234
			12345
			123456
			1234567
			12345678
			123456789
			12345678910

		int m, n;
		for(m = 1; m <= n; m++) {//外循环:控制输出每一个行
			for(n = 1; n <= m; n++) {//内循环：控制输出每一行中的每一颗*
				printf("%d ", n);//打印当前行上的数字
			}
			printf("\n");
		}

	

	/*break语句和continue语句
	1.break
	格式：break;
	作用：break用在循环结构中，用于迅速结束循环的进行
	----int i;
		for (i = 1; i < 6 ; i++) {
			if(i == 3) {
				break;
			}
			printf("i = %d\n",i);
		}

	----float pi=3.14;
		int r;
		for(r = 1; r <= 10; r++) {
			float area  = pi*r*r;
			if(area > 200){
				break;
			}
			printf("r=%d area=% .2f\n",r,area);
		}
		printf("执行完毕");

	----int n = 0;
		for(;;){
			printf("请输入一个整数（输入0时终止）：");
			scanf("%d",&n);
			if(n == 0){
				break;
			}
			printf("%d的立方是：%d\n",n, n*n*n);
		}
		printf("输入结束\n");

	2.continue
	格式：continue;
	作用：continue用在循环结构中，用于迅速开始下一次循环的进行
	----int k;
		for(k = 1; k < 6; k++) {
			if(k == 3) {
				continue;
			}
			printf("k = %d\n",k);
		}

	----int i;
		for(i = 1; i <= 10; i++){
			if(i % 3 == 0){
				continue;
			}
			printf("%d ",i);
		}
		printf("\n程序执行完毕\n");
	*/
		
	
	return 0;
}