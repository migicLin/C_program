#include<stdio.h>
#include<string.h>
int main(void)
{
    char a[10], b[10], c[10];
    char temp[10];
    scanf("%s %s %s", a, b, c);
    if (strcmp(a, b) > 0)
    {
        strcpy(temp, a);
        strcpy(a, b);
        strcpy(b, temp);
    }
    if (strcmp(b, c) > 0)
    {
        strcpy(temp, b);
        strcpy(b, c);
        strcpy(c, temp);
    }
    if (strcmp(a, b) > 0)
    {
        strcpy(temp, a);
        strcpy(a, b);
        strcpy(b, temp);
    }
    printf("%s\n%s\n%s", a, b, c);
    return 0;
}
