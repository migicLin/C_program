#include<stdio.h>
int stringCompared(char* p1, char* p2)
{
	int subtract;
	while (*p1 != '\0' || *p2 != '\0')
	{
		if (*p1 != *p2)
		{
			subtract = *p1 - *p2;
			return subtract;
		}
	}
	return 0;
}
int main()
{
    int m;  //m用于保存两个字符串中的第一个不同字符的ASCII码的差值
    //定义两个字符数组，分别用于保存输入的两个字符串
    char str1[20], str2[20];
        //定义两个指针变量，分别指向之前定义的两个字符数组
        char* p1, * p2;
    scanf("%s", str1);
    scanf("%s", str2);
    //让指针变量p1指向字符数组str1
    p1 = str1;
    //让指针变量p2指向字符数组str2
    p2 = str2;
    m = stringCompared(p1, p2);
    printf("%d", m);
    return 0;
}
