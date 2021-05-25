/*
题目内容：
钟面上的时针和分针之间的夹角总是在 0 ～180之间 ( 包括 0 和180 ) 。举例来说，在十二点的时候两针之间的夹角为 0 ，而在六点的时候夹角为180 ，在三点的时候为90 。本题要解决的是计算 12:00 到 11:59 之间任意一个时间的夹角。
输入格式:
每组测试数据包含两个数字：第一个数字代表小时 ( 大于 0 小于等于 12) ，第二个数字代表分 ( 在区间 [0, 59] 上 ) 。
输出格式：
对应每组测试数据，用常用格式显示时间以及这个时候时针和分针间的最小夹角，精确到小数点后一位。输出格式如下所示。
再看一看，想一想：是否可以不用if 语句，只使用 printf 函数来简化你的程序？
输入样例：
12 0
输出样例：
At 12:00 the angle is 0.0 degrees.
*/
#include <stdio.h>  
#include <math.h>  
int main(){  
    int m,h;  
    float a,a1,a2;  
    scanf("%d%d",&h,&m);  
    a1=h%12*30+0.5*m;  
    a2=6*m;  
    a=fabs(a1-a2);  
    printf("At %d:%02d the angle is %.1f degrees.\n",h,m,a);
}