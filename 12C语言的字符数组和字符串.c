
#include <stdio.h>
#include <string.h>

int main() {

	/*字符数组和字符串
	
	一、字符数组
	格式：char数组名[数组长度]
	
	char a[5];
	char b[5] = {'w', 'o','r','l', 'd'}; // 完全静态初始化
	char c[5] = {'H', 'i'}; // 部分静态初始化：未被赋值的元素被系统自动赋值'\0'
	int i;

	a[0] = 'H';
	a[1] = 'e';
	a[2] = 'l';
	a[3] = 'l';
	a[4] = 'o';

	for(i = 0; i < 5; i++) {
		printf("a[%d] = %c\n", i, a[i]);
	}
	
	for(i = 0; i < 5; i++) {
		printf("b[%d] = %c\n", i, b[i]);
	}

	printf("===输出字符串中的每一个字符===\n");

	for(i = 0; i < 11; i++) {
		printf("d[%d] = %c\n", i, d[i]);
	}


	二、字符串
	字符串要与字符数组结合起来
	c语言中，字符串使用字符数组来实现
	
	概念：双引号括起来的一个或多个字符
	例子："hello world" "A" 

	注意：字符串必须以‘/0’作为结束标记


	//字符串
	char d[11] = "I am happy";
	char e[13] = "hello, world";

	char x[] = {'h','e','l','l','o'};
	char y[] = "hello";
	int len1 = sizeof(x);
	int len2 =sizeof(y);
	printf("请输出不同初始化字符数组的长度：\n");
	printf("普通字符数组x的长度：%d\n",len1);
	printf("字符穿数组y的长度：%d\n",len2);
	return 0;
	*/
	
	/*几个常用的字符串处理函数
	所有的字符串处理函数都定义在string.h这个头文件中
	strlen():计算字符串中的总个数
	char mystr[]="hello,world";
	i为数组下标循环变量
	int len =0,i;
	for(i=0;mystr[i]!='\0';i++)
	len++;
	printf(“该字符串长度为:÷d\n",len);



	strcpy():拷贝字符串
	char a[30]=“Hello,me!";
	char b[] = "How are you?";
	printf(“执行拷贝之前a串:÷s\n",a);
	printf(“执行拷贝之后:%s\n",strcpy(a,b))


	strcmp():比较两个字符串的大小
	char strl[50]={0};
	char str2[50] ={0};
	int i= 1;
	do{
	printf("--------用户第d次输入--\n",)
	gets(strl);
	gets(str2);
	i++i
	}while(strcmp(strl,str2)



	strcat():拼接字符串
	char dest[30]=“Hello,";
	char srcll= "World!";
	strcat(dest,src);
	printf(*拼接后串 dest 为:qs\n",dest);
	*/
	;
	return 0;
}