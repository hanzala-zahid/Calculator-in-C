#include <stdio.h>

int main(int argc, char const *argv[])
{

    char maths;
    char science;
    char both;
    printf("Do you pass the maths exam resently");
    scanf("%c", &maths);
    printf("Do you pass the science exam resently");
    scanf("%c", &science);
    printf("Do you pass the both exam resently");
    scanf("%c", &both);

    if (maths)
    {
        printf("please accept the gift of RS: 15");
    }
    else if (science)
    {
        printf("please accept the gift of RS: 15");
    }
    else if (both)
    {
        printf("please accept the gift of RS: 45");
    }
    else
    {
        printf("There is no gift for you because you can't pass any exam");
    }

    return 0;
}
