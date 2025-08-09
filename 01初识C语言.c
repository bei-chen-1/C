#include <stdio.h> // 将stdio.h这个头文件拉入到我们这个C项目中，stdio.h来自于C的底层系统

int main() {

	int number; // 声明（创建）了一个名字叫number的整数型变量，因此，只能给该变量赋值一个整数。
	number = 2025; // 将2025这个整数赋值给变量number，从此，number的值就是2025了！
	printf("Hello, world!\n"); // 将要输出的内容输出到控制台，让我们看到该内容。printf()函数被定义在stido.h这个头文件中，因此，在使用printf()函数之前，必须先#include <stdio.h>
	printf("你好，今天天气不错，我们去爬山！");
	return 0;
}


/*
main()函数的作用：
1、任何C语言程序都是从main()函数开始运行
2、mian()函数是程序的执行开始时的入口和程序执行结束时的出口
3、没有main()函数，程序就无法执行!
4、任何C语言程序，有且只能有一个main()函数！

#腾讯会议：461-258-042

*/