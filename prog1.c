
                        // PALINDROME CHECKER//

#include<stdio.h>
int main()
{
    char str[100];
    int l=0;
    int p=1;

    printf("enter anything:");
    scanf("%s",&str);

    for(int i = 0 ;str[i] !='\0'; i++ )
    {
        l++;
    }

    for(int i=0; i<l /2; i++)
    {
        if(str[i] !=str[l -1 - i])
        {
            p=0;
            break;
        }
    }

    if(p)
    {
        printf("given string is palindrome");
    }
    else
    {
        printf("given string is not palindrome!!!!!");
    }


    return 0;
}