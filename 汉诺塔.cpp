
#include<stdio.h>
int num;//num表示移动次数
void move(int n,char a,char b,char c){
//n表示盘子数量
//a为起始柱子，b为最终柱子，c为过渡柱子
	if(n==0){
		printf("\t%c->%c\n",a,c);
	}
	else {
		move(n-1,a,c,b);// 递归处理,一开始的时候,先将n-1个盘子移至过渡柱c上
		printf("第%d步： \t将 %d 号圆盘从 %c 移至 %c \n", num + 1, n, a, c); // 然后再将最底下的大盘子直接移至目标柱子b
		num++;
	        move(n-1,b,a,c);// 然后重复以上步骤,递归处理放在过渡柱c上的n-1个盘子, 此时x已经为空，所以a被当成过渡柱了

	}
} 
int main(){
	int n;
	printf("请输入：");
	scanf("%d",&n);
	move(n,'a','b','c');
		printf("共移动%d次",num);
	return 0;
}
