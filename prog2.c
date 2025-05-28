#include<stdio.h>
#include<string.h>

int main()
{
    char str[100];
    int freq[256] = {0};

    printf("enter any thing:");
    gets(str);

    for(int i=0;str[i]!='\0';i++)
    {
        freq[(char)str[i]]++;
    }
    printf("frequency of each letter is: \n");

    for(int i=0;i<256;i++)
    {
        if(freq[i]!= 0)
        {
            printf("%c => %d\n",i,freq[i]);
        }
    }
    return 0; 
}
