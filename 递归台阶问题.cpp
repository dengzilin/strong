#include <iostream>
using namespace std;

//�ݹ鷽��
int f(int n)
{
	if (n < 1)
		return 0;
	else if (n == 1)
		return 1;
	else if (n == 2)
		return 2;
	else
		return (f(n - 1) + f(n - 2));
}

//���Ʒ���
//int a = 1;
//int b = 2;
//int sum = 0;
//int test(int n)
//{
//	if (n < 1)
//		return 0;
//	if (n == 1)
//		return 1;
//	if (n == 2)
//		return 2;
//
//	for (int i = 3; i < n + 1; i++)
//	{
//		sum = a + b;
//		a = b;
//		b = sum;
//	};
//	return sum;
//}


int main()
{
	int n;
	cout << "������Ҫ�ߵ�̨������";
	cin >> n;
	cout << "��" << n << "��̨���ܹ��� " << f(n) << " ���߷�" << endl;
	//cout << "��" << n << "��̨���ܹ��� " << test(n) << " ���߷�" << endl;

	return 0;
}