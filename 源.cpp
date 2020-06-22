#include<iostream>
using namespace std;


void test1()
{
	int n;
	int k = 1;
	while (cin >> n)
	{
		if (n >= 2 && n <= 10000)
		{
			/* 2-10000  输入一个数  判断如果这个数里面有素数并且除以10——1，那么就输出。如果没有的话就输出-1   */
			for (int j = 2; j <= n; j++)//遍历比输入数小的每一个
			{
				for (int i = 2; i <= n / 2; i++)
				{
					if (j%i == 0)//n%i玉0证明这个数可以被整除，
						continue;
					if (j == 1 && j % 10 == 1)
					{
						 k = 0;
						printf("%d", j);
						
					}
				}			
			}	 
			if (k)
			{
				cout << -1 << endl;
				break;
			}
		}
	}
}

int main()
{
	test1();
	system("pause");
	return 0;
}