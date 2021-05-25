/*
题目内容：
沫沫，灰灰和渣渣去锻炼身体，如果对他们跑步的距离分别只计整数 a、 b、 c，由于他们身高的差距，造成了 a<=b<=c，并且渣渣跑了N米之后就再也跑不动了。但是，按照他们事先的约定： 只有当 c*c==a*a+b*b 时，他们的锻炼才有效果。
现在他们三个人想知道，如果渣渣的极限N已知，那么有多少种有锻炼效果的跑步方案（即a, b, c有多少种可能的取值）。
输入格式:
一个整数N，表示渣渣的体力极限， N <= 5000。
输出格式：
一个整数，代表他们跑步方案的个数。
Hint：对于输入N=5，有方案 a=3, b=4, c=5, 共一种。
输入样例：
5
输出样例：
1
*/
#include <stdio.h>
int main()
{
	int a,b,c,n=0;
	scanf("%d",&c);
	for(;c>0;c--)
	{
		for(b=1;b<c;b++)
		{
			for(a=1;a<b;a++)
			{
				if(a*a+b*b==c*c)
				{
					n++;
				}
			}
		}
	}
	printf("%d\n",n);
	return 0;
}
