#include<stdio.h>
#include<string.h>//ע������ͷ�ļ�

int main()
{
    char a[101];//���101����
    int sum, i;
    sum = 0;
    i = 0;
    char p[][9] = { "ling","yi","er","san","si","wu","liu","qi","ba","jiu" };
    gets(a);//char * gets ( char * str )
    for (i = 0; i < strlen(a); i++)
    {
        sum += a[i] - '0';
    }
    //ÿ��λ�������
    int b[5];
    int j = 0;
    while (sum != 0)
    {
        b[j] = sum % 10;
        sum /= 10;
        j++;
    }
    //ȡ����ͺ�ÿ��λ�ϵ�����
    printf("%s", p[b[j - 1]]);
    int k = j - 2;
    for (k = j - 2; k >= 0; k--)
        printf(" %s", p[b[k]]);//������пո�
    return 0;
}