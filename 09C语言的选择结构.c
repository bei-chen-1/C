#include <stdio.h>

int main (){
/*
	
	//关系运算符： >  >=  >  >=  ==  !=
	//关系成立，得到1
	//关系不成立，得到0
	int a = 5 > 2;
	int b = 5 < 2;
	int c = 5 >= 2;
	int d = 5 <= 2;
	int e = 5 == 2;
	int f = 5 != 2;

*/


/*
	//逻辑运算符： &&(与)   ||(或)  ！(非)
	 
	//在C语言中，1代表关系成立(关系为假)，也就是真； 0代表关系不成立（关系为真），也就是假；
	
	//&&：  1 && 0 = 0;   0 && 1 = 0;  0 && 0 = 0;   1 && 1 =1

	//||:   1 || 0 =1;    0 || 1 = 1;  0 || 0 = 0;   1 || 1 = 1

	//!:    !1 = 0;       !0 = 1

	//关系运算符优先级大于逻辑运算符; 逻辑非优先级大于关系运算符

	int x = 11, y = 12, z = 0;
	int r1, r2, r3, r4, r5, r6, r7;
	r1 = x > y && x == 11;   //r1=0
	r2 = x < y || x >= 11;   //r2=1
	r3 = !(x == y);		  //r3=1
	r3 = !x == y;		      //!x=0; r3=0; 对非零的数取非得0
	r5 = x && y;             //r5=1; 非零即为真
	r6 = !y;				  //r6=0;
	r7 = x == y || z++;      //z++=0;r7=0
*/


/*
	int x=11,y=12,z=0;
	int result1, result2, result3;
	result1 = (!x);
	result2 = (x && y);
	result3 = (x == y) || (z++);
	printf("%d,%d,%d \n",result1,result2,result3);
*/


/*
	选择结构： if       if-else      if-else if-else  
	if结构：
	格式：if(条件表达式) {
				//代码
			}
	执行逻辑：程序执行到if结构，先去计算条件表达式的值
			  如果条件表达式的值为真，则进入if结构中执行其中的代码
			  如果条件表达式的值为假，则忽略if结构，及不执行其中的代码
	

	if-else结构：2选1结构
	格式：if(条件表达式) {
				//if的代码
			}else{
				//else的代码
			}
	执行逻辑：程序执行到if结构，先去计算条件表达式的值
			  如果条件表达式的值为真，则进入if结构中执行其中的代码
			  如果条件表达式的值为假，则忽略if结构，进入else结构中执行else其中的代码


	//if结构案例	
	int speed;
	printf("请输入一个你的速度：");
	scanf("%d", &speed);
	if(speed > 120) {
		printf("您超速了！！ \n");
	}


	//if结构案例2
	int num, result;
	printf("请输入一个整数：");
	scanf("%d", &num);
	result = num;
	if(num < 0) {
		result = -num;
	}
	printf("%d的绝度值是%d\n", num, result);


	//if-else结构案例
	int speed;
	printf("请输入一个你的速度：");
	scanf("%d", &speed);
	if(speed > 120) {
		printf("您超速了！！ \n");
	}else{
		printf("您非常遵守交通法！\n");
	}


	//if-else结构案例2
	int a;
	printf("请输入一个整数：");
	scanf("%d", &a);
	if(a % 2 == 0) {
		printf("%d是一个偶数 \n", a);
	}else{
		printf("%d是一个奇数 \n", a);
	}




	//闰年：1、年份能整除4，且不能整除100，则就是闰年
	//	    2、年份能整除400，则就是闰年
	int year;
	printf("请输入一个年份：");
	scanf("%d",&year);
	if(year % 4 == 0 && year % 100 != 0 || year % 400 == 0) {
		printf("%d是闰年\n",year);
	}else{
		printf("%d是平年\n",year);
	}
    
*/



	/*
	if else-if else 结构：多选一结构语句
	格式：if() {
	
		  }else if() {
		  
		  }else if() {
		  
		  }else {
		  
		  }

	double score;
	printf("请输入这名学生的成绩：");
	scanf("%lf",&score);
	if(score >= 0 && score <= 100) {
		if(score >= 90) {
			printf("优秀\n");
		}else if(score >= 80) {
			printf("良好\n");
		}else if(score >= 70) {
			printf("较好\n");	
		}else if(score >= 60) {
			printf("及格\n");	
		}else {
			printf("不及格\n");
		}
	}else {
		printf("请您检查并重新输入成绩\n");
	}
	*/


	/*
	BMI:身体质量指数，又称体质指数
	BMI = 体重(kg) / (身高(m) * 身高(m))
	BMI值   <18.5     18.5--24.9   25.0--29.9    >=30
	体质   体重过低   体重正常        超重       肥胖
	
	double weight, height, BMI;
	printf("请输入您的体重(KG)：");
	scanf("%lf",&weight);
	printf("请输入您的身高(m)：");
	scanf("%lf",&height);
	BMI = weight / (height * height);
	if(BMI < 18.5) {
		printf("体重过低\n");
	}else if(BMI < 25) {
		printf("体重正常\n");
	}else if(BMI < 30) {
		printf("体重超重\n");	
	}else {
		printf("体重肥胖\n");
	}
	*/
	


	/*
	switch(表达式) {
		case 常量表达式1：
			语句块1;break;
		case 常量表达式m：
			语句块2;break;
		default:
			语句块m;break;
	}
	
	//判断驾照类型
	char type;
	printf("请输入您的驾照类型：");
	scanf("%c",&type);
	switch(type) {
		case 'A':
			printf("您可以驾驶大客车、货车、和小轿车\n");
			break;
		case 'B':
			printf("您可以驾驶货车和小轿车\n");
			break;
		case 'C':
			printf("您可以驾驶小轿车\n");
			break;
		case 'D':
			printf("您可以驾驶摩托车\n");
			break;
		default:
			printf("您输入的驾照类型不正确\n");
			break;
	}
	

	int week;
	double hour, money, tax;
	printf("请输入星期几与工作时长：");
	scanf("%d %lf", &week, &hour); // 4 8
	
	switch(week) {
	case 1:
		money = 20 * hour;
		break;	
	case 2:
		money = 20 * hour;
		break;
	
	case 3:
		money = 20 * hour;
		break;
		
	case 4:
		money = 20 * hour;
		break;
		
	case 5:
		money = 20 * hour;
		break;
		
	case 6:
		money = 20 * hour * 3;
		break;
		
	case 7:
		money = 20 * hour * 3;
		break;

	default:
		printf("输入有误，请检查！");
		break;
	}

	printf("今天的工资为：%lf元\n", money);

	tax = money * 0.08;
	printf("今天的工资要缴税：%lf元\n", tax);
	
	
	
	int week;
	double hour, money, tax;
	printf("请输入星期几与工作时长：");
	scanf("%d %lf",&week, &hour);
	switch(week) {
		case 1:
			money = 20 * hour;
			break;
		case 2:
			money = 20 * hour;
			break;
		case 3:
			money = 20 * hour;
			break;
		case 4:
			money = 20 * hour;
			break;
		case 5:
			money = 20 * hour;
			break;
		case 6:
			money = 20 * hour * 3;
			break;
		case 7:
			money = 20 * hour * 3;
			break;
		default:
			printf("您输入的不正确\n");
			break;
	}
	printf("今天的工资为：%lf元\n",money);
	tax = 0.08 * money;
	printf("交税为：%lf元\n",tax);
	
	*/
	
return 0;
}