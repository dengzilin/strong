
#include<iostream>
#include<string>
using namespace std;

//�ݹ鷽��
int fun(int n)
{
	if (n < 1)
		return 0;
	else if (n == 1)
		return 1;
	else 
		return n * fun(n - 1);
}

//���Ʒ���
//int test(int n)
//{
//	if (n < 1)
//		return 0;
//
//	int sum = 1;
//	for (int i = 1; i < n + 1; i++)
//	{
//		sum *= i;
//	}
//	return sum;
//
//}



int main()
{
	int n;
	cout << "������׳�n!��ֵ��";
	cin >> n;
	cout << "�׳�" << n << "!��ֵΪ��" << fun(n) << endl;
	//cout << "�׳�" << n << "!��ֵΪ��" << test(n) << endl;

	return 0;
}