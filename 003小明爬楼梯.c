/*?������������¥�ݡ���Ҫ n ������ܵ���¥����
ÿ��������� 1 �� 2 ��̨�ס����ж����ֲ�ͬ�ķ�����������¥���أ�*/
#include<stdio.h> 
int plt(int x)
{
	if(x==1)
		return 1;
    if(x==2)
		return 2;
	else	
    	return (plt(x-1)+plt(x-2));
}
int main(void)
{
	int n;
	printf("������¥������"); 
	scanf("%d",&n);
	printf("��%d��",plt(n));
	return 0;
}
