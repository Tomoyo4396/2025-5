#define _CRT_SECURE_NO_WARNINGS 1//���ų���#define���ڶ���,������Ӧ����Ķ���

#define PI 3.14

//Ϊʹ��printf �� scanf �����õ�ͷ�ļ�
#include <stdio.h>

//{}�ⲿ��Ϊȫ�ֱ�����������ͬʱ��������ֲ�������
int age = 100;
//main��������������һ��������ֻ����һ��main����.
int main()
{
	//�����������Ӧ��
	// {}�ڲ���Ϊ�ֲ�����
	//���� �������� = ��ֵ
	int age = 20;
	double height = 172.5;
	float weight = 160.2;
	double num = 0;

	weight = weight / 2;
	age = age * 2;
	height = height + 2;
	num = age + height;

	// - `%d`��������int��                        \
	    - `%f`�������ȸ�������float��         \
		- `%lf`��˫���ȸ�������double��     \
		- `%c`�������ַ���char��                \
		- `%s`���ַ�����char ���飩            \
		- `%x`��ʮ����������                       \
		- `% % `�������� `%`������ `printf`��
	printf("%d\n", age);//%dΪ����ʮ���Ƶ�ʹ�ø�ʽ
	printf("%lf\n", height);//%lfΪ˫���ȸ����͵�ʹ�ø�ʽ
	printf("%f\n", weight);//%fΪ�����ȸ����͵�ʹ�ø�ʽ
	printf("%d %lf\n", age, height);
	printf("\\n %%d\n", age);//����ʹ������\\��//ʵ��ת��
	printf("num = %lf\n", num);


	//����scanf������ʹ�ã�����һ���򵥵�BMI������
	double Height;
	double Weight;
	printf("please input height(m) : ");
	scanf("%lf", &Height);//��Ϊ���뺯����python��input�����ƣ���ʽ��������庯���ĸ�ʽһ�¡�

	printf("please input weight(kg) : ");
	scanf("%lf", &Weight);

	double square;
	square = Height * Height;
	num = Weight / square;
	printf("num = %lf", num);
	
	return 0;
}