/* 
题目内容：
假设我们有 2n 张牌，它们以 1, 2, ..., n, n+1, ..., 2n 
编号并在开始时保持着这种顺序。一次洗牌就是将牌原来的次序变为 n+1, 1, n+2, 2, ..., 2n, n，也就是将原来的前 n 
张牌放到位置 2, 4, ..., 2n，并且将余下的 n 张牌按照他们原来的次序放到奇数位置 1, 3, ..., 
2n-1。已经证明对于任何一个自然数 n，这 2n 张牌经过一定次数的洗牌就回到原来的次序。但我们不知道对于一个特定的 
n，需要几次洗牌才能将牌洗回原来的次序。
输入格式：
牌张数的一半n，即初始情况下一共有2n张牌，n为int型整数
输出格式：
将牌洗回原来的次序所需要的洗牌次数
输入样例：
10
输出样例：
6[回车]
*/
#include <stdio.h>
#define N 100000
int main(){
     int n;
     scanf("%d",&n);
     int a[N] = {0};
     int b[N] = {0};
     for(int i=0; i<2*n; ++i)
         b[i] = i+1;
 
     int count=0,flag=0;
     while(flag<2*n){
         count++;
         flag = 0;
         int j = 0, t = n;
         for(int i=0; i<2*n; ++i){
             if(i%2)
                 a[i] = b[j++];
             else
                 a[i] = b[t++];
         }
         for(int i=0; i<2*n; ++i){
             b[i] = a[i];
             if(a[i]==i+1)
                 flag++;
         }
     }
     printf("%d\n",count);
 }
