#define _CRT_SECURE_NO_WARNINGS 1//符号常量#define用于定义,不报对应警告的定义

#define PI 3.14

//为使用printf 与 scanf 而引用的头文件
#include <stdio.h>

//{}外部的为全局变量，名字相同时优先输出局部变量。
int age = 100;
//main函数：主函数；一个工程中只能有一个main函数.
int main()
{
	//常量与变量的应用
	// {}内部的为局部变量
	//类型 变量名字 = 赋值
	int age = 20;
	double height = 172.5;
	float weight = 160.2;
	double num = 0;

	weight = weight / 2;
	age = age * 2;
	height = height + 2;
	num = age + height;

	// - `%d`：整数（int）                        \
	    - `%f`：单精度浮点数（float）         \
		- `%lf`：双精度浮点数（double）     \
		- `%c`：单个字符（char）                \
		- `%s`：字符串（char 数组）            \
		- `%x`：十六进制整数                       \
		- `% % `：字面量 `%`（类似 `printf`）
	printf("%d\n", age);//%d为整型十进制的使用格式
	printf("%lf\n", height);//%lf为双精度浮点型的使用格式
	printf("%f\n", weight);//%f为单精度浮点型的使用格式
	printf("%d %lf\n", age, height);
	printf("\\n %%d\n", age);//连续使用两次\\与//实现转义
	printf("num = %lf\n", num);


	//对于scanf函数的使用：构建一个简单的BMI计算器
	double Height;
	double Weight;
	printf("please input height(m) : ");
	scanf("%lf", &Height);//意为输入函数与python“input”类似，格式必须跟定义函数的格式一致。

	printf("please input weight(kg) : ");
	scanf("%lf", &Weight);

	double square;
	square = Height * Height;
	num = Weight / square;
	printf("num = %lf", num);
	
	return 0;
}