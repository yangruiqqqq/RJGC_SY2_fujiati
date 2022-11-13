#include<stdio.h>
#include<windows.h>
#include<math.h>
double EPS = 10E-6;
double sum(double a, double b)
{
	return a + b;
}
double sub(double a, double b)
{
	return a - b;
}
double mul(double a, double b)
{
	return a * b;
}
double divv(double a, double b)
{
	return a / b;
}
int rem(int a, int b)
{
	return a % b;
}
int addnumber(int c, int d)
{
	int sum = 0;
	for (int i = c; i <= d; i++)
	{
		sum += i;
	}
	return sum;
}
int factor(int n)
{
	int f = 1;
	for (int i = 1; i <= n; i++)
	{
		f *= i;
	}
	return f;
}
void displaymenu()
{
	printf("@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@ \n");
	printf("*############高级计算器############* \n");
	printf("************************************ \n");
	printf("* 1加法运算 * \n");
	printf("* 2减法运算 * \n");
	printf("* 3乘法运算 * \n");
	printf("* 4除法运算 * \n");
	printf("* 5取余运算 * \n");
	printf("* 6累加运算 * \n");
	printf("* 7阶乘运算 * \n");
	printf("* 0结束运算 * \n");
	printf("************************************ \n");
	printf("************************************ \n");
}
void main()
{
	int c, d; /*用于做四则运算的两个数值的说明*/
	double a, b; /*用来做累加函数的两个参数值的说明*/
	int intresult;
	double result; /*用于保存表单运算中函数的返回值*/
	int choice;
	displaymenu();/*保存用户选择项目菜单项*/
	while (1)
	{
		printf("请选择你所进行运算项目的符号:");
		scanf("%d", &choice);
		switch (choice)
		{
		case 1: /*加法计算*/
			printf("请输入两个数字，用空格隔开:");
			scanf("%lf %lf", &a,&b);
			result = sum(a,b);
			printf("%lf+%lf的计算结果是:%lf\n", a,b,result);
			break;
		case 2: /*减法计算*/
			printf("请输入两个数字，用空格隔开:");
			scanf("%lf %lf", &a,&b);
			result = sub(a, b);
			printf("%lf-%lf的计算结果是:%lf\n", a, b, result);
			break;
		case 3: /*乘法计算*/
			printf("请输入两个数字，用空格隔开:");
			scanf("%lf %lf", &a,&b);
			result = mul(a, b);
			printf("%lf*%lf的计算结果是:%lf\n", a,b,result);
			break;
		case 4: /*除法计算*/
		{
			scanf("%lf %lf",&a,&b);
			if (b - 0.0 < EPS) printf("数字错误\n");
			else
			{
				printf("请输入两个数字，用空格隔开:");
				result = divv(a,b);
				printf("%lf/%lf的计算结果是:%lf\n", a, b, result);
			}
			break;
		}
		case 5: /*取余计算*/
			printf("请输入两个数字，用空格隔开:");
			scanf("%d %d", &c,&d);
			result = rem(c, d);
			printf("%d % %d的计算结果是:%d\n", c, d, result);
			break;
		case 6: /*累加计算*/
			printf("请输入两个整数，用空格隔开");
			scanf("%d %d", &c,&d);
			intresult = addnumber(c, d);
			printf("%d-%d的累加计算结果是:%d\n", c, d, intresult);
			break;
		case 7: //阶乘计算
		{
			printf("请输入一个大于0小于10的整数字");
			scanf("%d", &c);
			if (c < 0 || c>10)
			{
				printf("请输入一个大于0小于10的整数字,数据错误。\n");
				break;
			}
			intresult = factor(c);
			printf("%d的阶乘计算结果是:%d\n", c, intresult);
			break;
		}
		case 0:
			printf("谢谢使用。欢迎下次再用。\n");
			return;
		default:
			printf("选择错误,程序结束\n");
			break;
		}
	}
}