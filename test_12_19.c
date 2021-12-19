#include<stdio.h>
#include<string.h>//注意引用头文件

int main()
{
    char a[101];//最多101个数
    int sum, i;
    sum = 0;
    i = 0;
    char p[][9] = { "ling","yi","er","san","si","wu","liu","qi","ba","jiu" };
    gets(a);//char * gets ( char * str )
    for (i = 0; i < strlen(a); i++)
    {
        sum += a[i] - '0';
    }
    //每个位上数相加
    int b[5];
    int j = 0;
    while (sum != 0)
    {
        b[j] = sum % 10;
        sum /= 10;
        j++;
    }
    //取出求和后每个位上的数字
    printf("%s", p[b[j - 1]]);
    int k = j - 2;
    for (k = j - 2; k >= 0; k--)
        printf(" %s", p[b[k]]);//最后不能有空格
    return 0;
}