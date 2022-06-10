#include<string.h>
#include<stdio.h>
#include<ctype.h>
#include"libft.h"

int ft_test_isalnum(void)
{
    char *str1 = "lk-_=+=':;\\|\\/?,`~!@#$%ajdf93%$#@%()*&73894lkdjsfsd934";
    for (size_t i = 0; i < strlen(str1); i++) {
        if(ft_isalnum(str1[i]) != isalnum(str1[i])) {
            printf("Test Failed on the %zurd char\n", i);
            printf("Recived: %d", ft_isalnum(str1[i]));
            return (0);
        }
    }
    printf("ft_isalpha - OK!\n");
    return (1);
}

int main()
{
	ft_test_isalnum();
	return (0);
}
