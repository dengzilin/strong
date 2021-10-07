#include<stdio.h>

//递归求斐波那契数列 
 int Fibonacci(int n){
 	
 if(n==1||n==2){
 	return 1;
	 }
 	else
 	 return Fibonacci(n-1)+Fibonacci (n-2);
 } 
 //时间复杂度： 递归的运算呈树状展开，为二叉树形式，因此时间复杂度为O(2^n)
 //空间复杂度：无额外开辟空间，因此空间复杂度为O(1) 
 
// //递推求斐波那契数列 
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
 //时间复杂度：代码执行的次数与n有关，可以得到它的时间复杂度应该为O(n)
    //因为没有开辟额外的空间，所以空间复杂度为O(1)
     
  int main()
  { 
  int i,n; 
   printf("您想求前几项斐波那契？：");
  scanf("%d",&n);
  Fibonacci(n);
  printf("结果如下：\n"); 
  for(int i=1;i<=n;++i){
  	
	  printf("%d\n",Fibonacci(i));}
	  return 0; 
  }
