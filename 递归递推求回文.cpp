#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

//�ݹ��жϻ����ַ��� 
int Palindrome (char *pa,int length,int start)
{
 int end=length-1;
 if(length==0||length==1)
 {
  return 1;
 }
 else
 {
  if(*(pa+start)==*(pa+end))
  {
   return Palindrome(pa,length-1,start+1);//�ж���һλ�͵�����һλ
  }
  else
  {
   return 0;
  }
 }
 return 0;
}


int main(int argc, char *argv[]) {
 char inputstr[100],length;
 int start=0;
 printf("�������ַ�����");
 gets(inputstr);
 length=strlen(inputstr);
 if(Palindrome(inputstr,length,start))
 {
  printf("%s is a palindrome\n",inputstr); 
 }
 else
 {
  printf("%s is not a palindrome\n",inputstr); 
 } system("pause");
 return 0;
}
//ʱ�临�Ӷȣ� �ݹ��жϻ����������д���Ϊlength/2,�������ݹ�ģΪn����ʱ�临�Ӷ�ΪO(n)
//�ռ临�Ӷȣ�����������޶��⿪�ٿռ䣬�ռ临�Ӷ�ΪO(1) 

////�����жϻ���
//#include<stdio.h>
//#include<string.h>
//#include<algorithm>
//#define N 100
//using namespace std;
//typedef long long ll;
//ll f[N][N];
//char str[N];
//int main()
//{
//	freopen("palindorme.in","r",stdin);
//	freopen("palindorme.out","w",stdout);
//	int c, T, n, m, i, j, k;
//	scanf("%d", &T);
//	for (c = 1; c <= T; c++)
//	{
//		scanf("%s", str + 1);
//		n = strlen(str + 1);
//		memset(f, 0, sizeof(f));
//		for (i = 1; i <= n; i++)
//			f[i][i] = 1;
//		for (j = 1; j <= n; j++)
//		{
//			for (i = j - 1; i > 0; i--)
//			{
//				for (k = i + 1; k < j; k++)
//				{
//					if (str[k] == str[i])
//						f[i][j] += 1 + f[i + 1][k - 1];
//					if (str[k] == str[j])
//						f[i][j] += 1 + f[k + 1][j - 1];
//				}
//				f[i][j] += f[i + 1][j - 1] + 2 + (str[i] == str[j] ? 1 + f[i + 1][j - 1] : 0);
//			}
//		}
//		printf("%lld\n", f[1][n]);
//	}
//	return 0;
//}
// //���ư��˵�
