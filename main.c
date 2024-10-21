#include <stdio.h>
#include <string.h>
int main()
{
    char s[] = "hello world";
    int len = strlen(s);
    int i = len -1;
    printf("reversed: ");
    while(i>=0)
    {
        printf("%c",s[i]);
        i--;
    }
    printf("\n");
    return 0;
}
