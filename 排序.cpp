//#include<stdio.h>
//#define N 8

//冒泡排序
//int main()
//{
//	int a[N] = {2,0,0,5,2,0,6,7};
//	int temp,i,j;
//	for(i=0;i<N-1;i++)//进行7次比较
//	    for(j=0;j<N-i-1;j++)//在每次中进行10-i-1次比较
//		    if(a[j]>a[j+1])//按升序排序，降序用< 
//			{
//				temp = a[j+1];   //交换相邻的两个元素 
//				a[j+1] = a[j];
//				a[j] = temp;
//			} 
//    printf("排序后的结果为：\n");
//	for(i=0;i<N;i++)
//	printf("%d",a[i]);
//	return 0;	 
//	
//} 





//插入排序
//#include<iostream>
//#include<cstdio>
//using namespace std;
//#define N 5
//int a[N];//有序数组 
//int main()
//{
//	int i,k,x;
//	printf("请输入数字：\n",N);
//	for(i=0;i<N;i++)
//	{
//		scanf("%d",&x);
//		for(k=i;k>0;k--)//从后向前比较 
//		{
//			if(a[k-1]>x)//x前面的数比它大 
//			   a[k]=a[k-1];//将大的数向后移动 
//			   else    break;//找到插入的位置，退出 
//		}
//		a[k]=x;//完成插入操作 
//	}
//	for(i=0;i<N;i++)
//	printf("%d",a[i]);
//	return 0;
//}






//选择排序
//#include<iostream>
//using namespace std;
//#define N 8
//int main()
//{
//	int a[N],pos;
//	int i,j,temp;
//	printf("请输入数字：\n",N);
//	for(i=0;i<N;i++)
//	    scanf("%d",&a[i]);
//	//找到最大的数，实现从大到小的排序
//	for(i=0;i<N-1;i++)//外层循环表示排序的躺数 
//	{
//		pos=i;//存储最值的位置
//		for(j=i+1;j<N;j++)//内层循环表示每一趟参与排序的数字 
//		{
//			if(a[j]>a[pos])//找到当前序列中最大数字所在的位置
//			{
//				pos=j;
//			} 
//		}
//		if(pos!=i)//当找到的最大数字的位置发生变化的时候，才交换两个数的位置
//		{
//			temp=a[pos];//把最大的数放在当前序列的最前面 
//			a[pos]=a[i];
//			a[i]=temp;
//		}
//	}
//	printf("最后的结果为：");
//	for(i=0;i<N;i++)
//	printf("%d",a[i]);
//	return 0;
//} 






//快速排序
#include<iostream>
#include<cstdio>
using namespace std;
void quickSort(int s[],int left,int right)
{
	if(left<right)//只有当left<right的时候才执行快速排序 
	{
		int i=left,j=right,x=s[left];//初始值
	    while(i<j)//只要i<j就一直循环从后往前找，从前往后找
	    {
		    while(i<j && s[j]>=x)//从右往左找第一个小于x的数
		        j--;
		    if(i<j)
		        s[i++]=s[j];//进行填数
		    while(i<j && s[i]<x)//从左向右找第一个大于等于x的数
		        i++;
		    if(i<j)
		        s[j--]=s[i];//进行填数 
	    }
	    s[i] = x;//把基准数填入
		quickSort(s,left,i-1);//当前基准数左边的子数组递归调用 
		quickSort(s,i+1,right);//当前基准数右边的子数组递归调用
    }
}
int main()
{
	int s[] = {2,34,12,3,56,7};
	printf("原来的数组为：\n");
	for(int i=0;i<6;i++)
    printf(" %d ",s[i]);
    printf("\n");
    quickSort(s,0,5);//调用快速排序的函数，参数为数组名，数组的左端点，数组的右端点
	printf("排序后的数组为：\n");
	for(int i=0;i<6;i++)
	printf(" %d ",s[i]);
	printf("\n");
	return 0; 
 } 












 

