#include <stdio.h>

int main()
{
    int n, i;
    char str[100];

    scanf("%[^\n]", str);

    i = 0;
    while(str[i] != '\0'){
		printf("%c ", str[i]+3);
    	i++;
    }


    return 0;
}
