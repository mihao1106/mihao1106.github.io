/*?假设你正在爬楼梯。需要 n 阶你才能到达楼顶。
每次你可以爬 1 或 2 个台阶。你有多少种不同的方法可以爬到楼顶呢？*/
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
	printf("请输入楼梯数："); 
	scanf("%d",&n);
	printf("有%d种",plt(n));
	return 0;
}
