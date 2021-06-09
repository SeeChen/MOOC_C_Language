/*
题目内容：
请在上一题的基础上，采用递归的方法，计算含多个运算符的四则运算表达式字符串的值(无括号，但要考虑优先级)
输入格式:
多个运算符的四则运算表达式字符串
输出格式：
运算结果
输入样例：
3*2+3
输出样例：
9
*/
#include <stdio.h>
int calc(int*,char*,int);
int main(){
	int i,ans,uuzi[100];
	char srui[100];
	for(i=0;;i++){
		scanf("%d",&uuzi[i]);
		scanf("%c",&srui[i]);
		if(srui[i]=='\n')
			break;
	}
	printf("%d",calc(uuzi,srui,i));
}
int calc(int uuzi[],char srui[],int j){
	--j;
	if(j==-1)
		return uuzi[j+1];
	else{
		switch(srui[j]){
			case '+':
				return calc(uuzi,srui,j)+uuzi[j+1];
				break;
			case '-':
				return calc(uuzi,srui,j)-uuzi[j+1];
				break;
			case '*':
				uuzi[j]=uuzi[j]*uuzi[j+1];
				for(int i=j;srui[i]!='\n';i++){
					uuzi[j+1]=uuzi[j+2];
					srui[j]=srui[j+1];
				}
				calc(uuzi,srui,j);
				break;
			case '/':
				if(uuzi[j+1]==0)
					return calc(uuzi,srui,j-1);
				else{
					uuzi[j]=uuzi[j]/uuzi[j+1];
					for(int i=j;srui[i]!='\n';i++){
						uuzi[j+1]=uuzi[j+2];
						srui[j]=srui[j+1];
					}
				}
				calc(uuzi,srui,j);
				break;
		}
	}
}
