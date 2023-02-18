#include <stdio.h>
int max(int x, int y);
 max()函数声明
void main(){
    int a, b, m;
    scanf_s("%d,%d", &a, &b);
    m = max(a, b);
    用户自定义函数的调用
    printf("a = %d,b = %d,m = %d", a, b, m);
}
int max(int x, int y){
    用户自定义函数，求两个数中的较大值
    int m;
    if (x > y)
        m = x;
    else
        m = y;
    return m;
}