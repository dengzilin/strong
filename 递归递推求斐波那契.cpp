#include<stdio.h>

//�ݹ���쳲��������� 
 int Fibonacci(int n){
 	
 if(n==1||n==2){
 	return 1;
	 }
 	else
 	 return Fibonacci(n-1)+Fibonacci (n-2);
 } 
 //ʱ�临�Ӷȣ� �ݹ���������״չ����Ϊ��������ʽ�����ʱ�临�Ӷ�ΪO(2^n)
 //�ռ临�Ӷȣ��޶��⿪�ٿռ䣬��˿ռ临�Ӷ�ΪO(1) 
 
// //������쳲��������� 
//int i;
//int Fibonacci(int n){
// 
// 	if(n==1||n==2){
// 		return 1;
// 	}	int a=1;int b=1;
// 	int sum=0;
// 	int temp;
// 	for(i=3;i<=n;++i){
// 	sum=a+b;
// 	temp=b;
// 	b=sum;
// 	a=temp;	}
// 	return sum;
// }
 //ʱ�临�Ӷȣ�����ִ�еĴ�����n�йأ����Եõ�����ʱ�临�Ӷ�Ӧ��ΪO(n)
    //��Ϊû�п��ٶ���Ŀռ䣬���Կռ临�Ӷ�ΪO(1)
     
  int main()
  { 
  int i,n; 
   printf("������ǰ����쳲���������");
  scanf("%d",&n);
  Fibonacci(n);
  printf("������£�\n"); 
  for(int i=1;i<=n;++i){
  	
	  printf("%d\n",Fibonacci(i));}
	  return 0; 
  }
