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
			/* 2-10000  ����һ����  �ж����������������������ҳ���10����1����ô����������û�еĻ������-1   */
			for (int j = 2; j <= n; j++)//������������С��ÿһ��
			{
				for (int i = 2; i <= n / 2; i++)
				{
					if (j%i == 0)//n%i��0֤����������Ա�������
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