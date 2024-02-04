#include <stdio.h>
#include<string.h>
/*                      HW String                           */


int main()
{
    char string[500],reverse_str[500];
    printf("Enter a string: ");
    fflush(stdin);fflush(stdout);
    gets(string);
    for(int i=strlen(string)-1,j=0;i>=0;i--,j++)
    {
        reverse_str[j]=string[i];
    }
    reverse_str[strlen(string)]='\0';
    printf("Reverse string is : %s\n",reverse_str);
}

/*
//EX2:
int main()
{
    char string[500],ch;
    int length=0;
    printf("Enter a string: ");
    fflush(stdin);fflush(stdout);
    gets(string);
    while(string[length]!='\0'){length++;}
    printf("Length of string: %d",length);
}
*/


/*
//EX1:
int main()
{
    char string[500],ch;
    int ans=0;
    printf("Enter a string: ");
    fflush(stdin);fflush(stdout);
    gets(string);
    printf("Enter a character to find frequency: ");
    fflush(stdin);fflush(stdout);
    scanf("%c",&ch);
    for(int i=0;i<strlen(string);i++)
    {
        if(string[i]==ch)
            ans++;
    }
    printf("Frequency of e = %d\n",ans);
    return 0;
}
*/

