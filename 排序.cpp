//#include<stdio.h>
//#define N 8

//ð������
//int main()
//{
//	int a[N] = {2,0,0,5,2,0,6,7};
//	int temp,i,j;
//	for(i=0;i<N-1;i++)//����7�αȽ�
//	    for(j=0;j<N-i-1;j++)//��ÿ���н���10-i-1�αȽ�
//		    if(a[j]>a[j+1])//���������򣬽�����< 
//			{
//				temp = a[j+1];   //�������ڵ�����Ԫ�� 
//				a[j+1] = a[j];
//				a[j] = temp;
//			} 
//    printf("�����Ľ��Ϊ��\n");
//	for(i=0;i<N;i++)
//	printf("%d",a[i]);
//	return 0;	 
//	
//} 





//��������
//#include<iostream>
//#include<cstdio>
//using namespace std;
//#define N 5
//int a[N];//�������� 
//int main()
//{
//	int i,k,x;
//	printf("���������֣�\n",N);
//	for(i=0;i<N;i++)
//	{
//		scanf("%d",&x);
//		for(k=i;k>0;k--)//�Ӻ���ǰ�Ƚ� 
//		{
//			if(a[k-1]>x)//xǰ����������� 
//			   a[k]=a[k-1];//�����������ƶ� 
//			   else    break;//�ҵ������λ�ã��˳� 
//		}
//		a[k]=x;//��ɲ������ 
//	}
//	for(i=0;i<N;i++)
//	printf("%d",a[i]);
//	return 0;
//}






//ѡ������
//#include<iostream>
//using namespace std;
//#define N 8
//int main()
//{
//	int a[N],pos;
//	int i,j,temp;
//	printf("���������֣�\n",N);
//	for(i=0;i<N;i++)
//	    scanf("%d",&a[i]);
//	//�ҵ���������ʵ�ִӴ�С������
//	for(i=0;i<N-1;i++)//���ѭ����ʾ��������� 
//	{
//		pos=i;//�洢��ֵ��λ��
//		for(j=i+1;j<N;j++)//�ڲ�ѭ����ʾÿһ�˲������������ 
//		{
//			if(a[j]>a[pos])//�ҵ���ǰ����������������ڵ�λ��
//			{
//				pos=j;
//			} 
//		}
//		if(pos!=i)//���ҵ���������ֵ�λ�÷����仯��ʱ�򣬲Ž�����������λ��
//		{
//			temp=a[pos];//�����������ڵ�ǰ���е���ǰ�� 
//			a[pos]=a[i];
//			a[i]=temp;
//		}
//	}
//	printf("���Ľ��Ϊ��");
//	for(i=0;i<N;i++)
//	printf("%d",a[i]);
//	return 0;
//} 






//��������
#include<iostream>
#include<cstdio>
using namespace std;
void quickSort(int s[],int left,int right)
{
	if(left<right)//ֻ�е�left<right��ʱ���ִ�п������� 
	{
		int i=left,j=right,x=s[left];//��ʼֵ
	    while(i<j)//ֻҪi<j��һֱѭ���Ӻ���ǰ�ң���ǰ������
	    {
		    while(i<j && s[j]>=x)//���������ҵ�һ��С��x����
		        j--;
		    if(i<j)
		        s[i++]=s[j];//��������
		    while(i<j && s[i]<x)//���������ҵ�һ�����ڵ���x����
		        i++;
		    if(i<j)
		        s[j--]=s[i];//�������� 
	    }
	    s[i] = x;//�ѻ�׼������
		quickSort(s,left,i-1);//��ǰ��׼����ߵ�������ݹ���� 
		quickSort(s,i+1,right);//��ǰ��׼���ұߵ�������ݹ����
    }
}
int main()
{
	int s[] = {2,34,12,3,56,7};
	printf("ԭ��������Ϊ��\n");
	for(int i=0;i<6;i++)
    printf(" %d ",s[i]);
    printf("\n");
    quickSort(s,0,5);//���ÿ�������ĺ���������Ϊ���������������˵㣬������Ҷ˵�
	printf("����������Ϊ��\n");
	for(int i=0;i<6;i++)
	printf(" %d ",s[i]);
	printf("\n");
	return 0; 
 } 












 

