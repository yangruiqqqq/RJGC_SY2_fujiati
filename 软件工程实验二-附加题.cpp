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
	printf("*############�߼�������############* \n");
	printf("************************************ \n");
	printf("* 1�ӷ����� * \n");
	printf("* 2�������� * \n");
	printf("* 3�˷����� * \n");
	printf("* 4�������� * \n");
	printf("* 5ȡ������ * \n");
	printf("* 6�ۼ����� * \n");
	printf("* 7�׳����� * \n");
	printf("* 0�������� * \n");
	printf("************************************ \n");
	printf("************************************ \n");
}
void main()
{
	int c, d; /*���������������������ֵ��˵��*/
	double a, b; /*�������ۼӺ�������������ֵ��˵��*/
	int intresult;
	double result; /*���ڱ���������к����ķ���ֵ*/
	int choice;
	displaymenu();/*�����û�ѡ����Ŀ�˵���*/
	while (1)
	{
		printf("��ѡ����������������Ŀ�ķ���:");
		scanf("%d", &choice);
		switch (choice)
		{
		case 1: /*�ӷ�����*/
			printf("�������������֣��ÿո����:");
			scanf("%lf %lf", &a,&b);
			result = sum(a,b);
			printf("%lf+%lf�ļ�������:%lf\n", a,b,result);
			break;
		case 2: /*��������*/
			printf("�������������֣��ÿո����:");
			scanf("%lf %lf", &a,&b);
			result = sub(a, b);
			printf("%lf-%lf�ļ�������:%lf\n", a, b, result);
			break;
		case 3: /*�˷�����*/
			printf("�������������֣��ÿո����:");
			scanf("%lf %lf", &a,&b);
			result = mul(a, b);
			printf("%lf*%lf�ļ�������:%lf\n", a,b,result);
			break;
		case 4: /*��������*/
		{
			scanf("%lf %lf",&a,&b);
			if (b - 0.0 < EPS) printf("���ִ���\n");
			else
			{
				printf("�������������֣��ÿո����:");
				result = divv(a,b);
				printf("%lf/%lf�ļ�������:%lf\n", a, b, result);
			}
			break;
		}
		case 5: /*ȡ�����*/
			printf("�������������֣��ÿո����:");
			scanf("%d %d", &c,&d);
			result = rem(c, d);
			printf("%d % %d�ļ�������:%d\n", c, d, result);
			break;
		case 6: /*�ۼӼ���*/
			printf("�����������������ÿո����");
			scanf("%d %d", &c,&d);
			intresult = addnumber(c, d);
			printf("%d-%d���ۼӼ�������:%d\n", c, d, intresult);
			break;
		case 7: //�׳˼���
		{
			printf("������һ������0С��10��������");
			scanf("%d", &c);
			if (c < 0 || c>10)
			{
				printf("������һ������0С��10��������,���ݴ���\n");
				break;
			}
			intresult = factor(c);
			printf("%d�Ľ׳˼�������:%d\n", c, intresult);
			break;
		}
		case 0:
			printf("ллʹ�á���ӭ�´����á�\n");
			return;
		default:
			printf("ѡ�����,�������\n");
			break;
		}
	}
}