
#include<stdio.h>
int num;//num��ʾ�ƶ�����
void move(int n,char a,char b,char c){
//n��ʾ��������
//aΪ��ʼ���ӣ�bΪ�������ӣ�cΪ��������
	if(n==0){
		printf("\t%c->%c\n",a,c);
	}
	else {
		move(n-1,a,c,b);// �ݹ鴦��,һ��ʼ��ʱ��,�Ƚ�n-1����������������c��
		printf("��%d���� \t�� %d ��Բ�̴� %c ���� %c \n", num + 1, n, a, c); // Ȼ���ٽ�����µĴ�����ֱ������Ŀ������b
		num++;
	        move(n-1,b,a,c);// Ȼ���ظ����ϲ���,�ݹ鴦����ڹ�����c�ϵ�n-1������, ��ʱx�Ѿ�Ϊ�գ�����a�����ɹ�������

	}
} 
int main(){
	int n;
	printf("�����룺");
	scanf("%d",&n);
	move(n,'a','b','c');
		printf("���ƶ�%d��",num);
	return 0;
}
