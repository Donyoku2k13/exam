#include<stdio.h> 
#include<math.h> 
#include<locale.h> 
#include <iostream>
#include <time.h>
int main()
{
	setlocale(LC_ALL,"");
	//task12
	int m, n;
	printf("���������� ���������:");
	scanf_s("%d", &n);
	printf("���������� ������");
	scanf_s("%d", &m);
	if (n > m)
	{
		printf("��� �������\n");
	}
	else
	{

	  
		 for (size_t i = 0; i < m; i++)
		 {
			if (i > n)
			{
				i = 0;
			}

				

			else
			{
				i++;
			}
		 }
		 do
		 {
			for (size_t i = 0; i < m; i++)
			{
				printf("�����:%d\n", i);
			}
		 } while (true);
		 
    }

	//task11
	/*int n;
	int s1 = rand() % 10;
	printf("%d\n", s1);
	int s2 = rand() % 10;
	printf("%d\n", s2);
	int s3 = rand() % 10;
	printf("%d\n", s3);
	int s4 = rand() % 10;
	printf("%d\n", s4);
	int s5 = rand() % 10;
	int o;
	printf("%d\n", s5);
	printf("���������� ����� � ������:");
	scanf_s("%d", &n);
	for (size_t i = 0; i <= n; i++)
	{


		
		if (s1 == s2 || s1 == s3 || s1 == s4 || s1 == s5, s1 == 1)
		{
			s1 = 0;
		}
		if (s1 == s2 || s1 == s3 || s1 == s4 || s1 == s5, s1 == 10)
		{
			s1 = 0;
		}
		o = s1 + s2 + s3 + s4 + s5;
		printf("������ %d\n", o);*/
	
	//task9
	/*int n;
		int b = 0;
		int d = 0;
		printf("���������� ����� � ������:");
		scanf_s("%d", &n);
		for (size_t i = 1; i <= n; i++)
		{
			int a = 1 + rand() % 130;
			if (a < 100)
			{
				b++;
			}
			if (a > 100)
			{
				d++;
			}

		}
		printf("���������� ������ ����� %d\n", d);

		printf("���������� ����� ����� %d\n", b);*/

	
	//task8
	/*int g = 1 + rand() % 36;
	printf("%d\n", g);
	int i = rand() % 5;
	printf("%d\n", i);
	int s = rand() % 5;
	printf("%d\n", s);
	if (i<=2 && s<=2 )
	{
		printf("���-�� ���������� %d\n", g);
		printf("���-�� ���������� %d\n", g);
	}*/
	
	//task7

		/*int c = 0;
		int win = 1 + rand() % 18;
		int lose = 1 + rand() % 18;
		while (win > lose)
			c++;
		printf("���������� �����:%d\n", win);
		printf("���������� ����������:%d\n", lose);
		printf("����� ������:%d\n", c);*/


	//task6
		/*int n;
		int b = 0;
		int d = 0;
		printf("���������� ����� � ������:");
		scanf_s("%d", &n);
		for (size_t i = 1; i <= n; i++)
		{
			int a = 1980 + rand() % 130;
			if (a < 1985)
			{
				b++;
			}
			if (a > 1990)
			{
				d++;
			}

		}
		printf("���������� ����� ���������� ����� 1990 ����:%d\n", d);

		printf("���������� ����� ���������� �� 1985 ����:%d\n", b);*/
	
	
	
	//task5
	
	/*int c1 = 1 + rand() % 36;
	int c2 = 1 + rand() % 36;
	int c3 = 1 + rand() % 36;
	int c5 = 1 + rand() % 36;
	int c7 = 1 + rand() % 36;
	int c9 = 1 + rand() % 36;
	int c11 = 1 + rand() % 36;
	int s;
	s = c1 + c2 + c3 + c5 + c7 + c9 + c11;
		printf("���-�� ��������  %d\n", s);
	*/




	//task4
	//srand(time(NULL));

	//int a = 17 + rand() % 100; // ����� ������� �����
	//int b = 17 + rand() % 100;
	//int c = 17 + rand() % 100;
	//int s;
	//s = a + b + c;
	//
	//printf("����� �������: %d\n", s);

	//task3
			
			/*int s;
			int a = 1 + rand() % 10000;
			int b = 1 + rand() % 10000;
			int c = 1 + rand() % 10000;
			if (a > 1000 && b > 1000 && c > 1000)
			{
				s = a + b + c;
				printf("�����: %d\n", s);
			}
			if (a > 1000 && b > 1000 && c < 1000)
			{
				s = a + b;
				printf("�����: %d\n", s);
			}
			if (b > 1000 && c > 1000 && a < 1000)
			{
				s = c + b;
				printf("�����: %d\n", s);
			}
			if (a > 1000 && c > 1000 && b < 1000)
			{
				s = a + c;
				printf("�����: %d\n", s);
			}
			else if (a < 1000 && b < 1000 & c < 1000)
			{
				printf("��� ������� ����� ������ 1000 \n");
			}*/
		




	//task2
	/*int  s = 0;
	for (size_t n=0; n<50; n++)
	{

	
		if (n % 2 > 0)
		{
			s = s + n;
		}
		printf("%d\n", s);
	}
*/



	//task1
	/*int s, q1, q2, q4, q8, q16, q32, q64, n;

	printf("n= ");
	scanf_s("%d", &n);
	q1 = n;
	s = n % 2;
	q2 = n / 2;
	s = n % 2;
	q4 = n / 4;
	s = n % 4;
	q8 = n / 8;
	s = n % 8;
	q16 = n / 16;
	s = n % 16;
	q32 = n / 32;
	s = n % 32;
	q64 = n / 64;
	s = n / 64;
	
	printf("%d\n", q1);
	printf("%d\n", q2);
	printf("%d\n", q4);
	printf("%d\n", q8);
	printf("%d\n", q16);
	printf("%d\n", q32);
	printf("%d\n", q64);*/
	system("pause");
}