#include <stdio.h>
int max(int x, int y);
 max()��������
void main(){
    int a, b, m;
    scanf_s("%d,%d", &a, &b);
    m = max(a, b);
    �û��Զ��庯���ĵ���
    printf("a = %d,b = %d,m = %d", a, b, m);
}
int max(int x, int y){
    �û��Զ��庯�������������еĽϴ�ֵ
    int m;
    if (x > y)
        m = x;
    else
        m = y;
    return m;
}