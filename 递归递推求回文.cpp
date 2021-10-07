#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

//递归判断回文字符串 
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
   return Palindrome(pa,length-1,start+1);//判断下一位和倒数下一位
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
 printf("请输入字符串：");
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
//时间复杂度： 递归判断回文数其运行次数为length/2,若其数据规模为n，则时间复杂度为O(n)
//空间复杂度：运算过程中无额外开辟空间，空间复杂度为O(1) 

////递推判断回文
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
// //递推搬运的
