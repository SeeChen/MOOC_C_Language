/* 
题目内容：
这是双重循环的入门题目，大家来看看，你会做吗？
输入 n 的值，输出如下例（ n=4 ）所示的由数字组成的正方型。（字母中间是两个空格）
  1  2  3  4
  5  6  7  8
  9 10 11 12
 13 14 15 16
输入格式:
n
输出格式：
数字组成的正方型
输入样例：
1
输出样例：
1
*/
#include <stdio.h>
int main(){
	int i,j,a,x=1;
	scanf("%d",&a);
	for(i=1;i<=a;i++){
		for(j=1;j<=a;j++){
			printf(" %2d",x);
			x++;
		}
		printf("\n");
	}
}
