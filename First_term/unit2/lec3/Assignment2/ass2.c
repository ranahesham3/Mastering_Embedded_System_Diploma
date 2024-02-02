#include "stdio.h"

/*                      Homework 2                          */


//EX8:
int main()
{
    char ch;
    float n1,n2;
    printf("Enter operator either + or - or * or divide : ");
    fflush(stdin);fflush(stdout);
    scanf("%c",&ch);
    printf("Enter two operands : ");
    fflush(stdin);fflush(stdout);
    scanf("%f%f",&n1,&n2);
    switch(ch)
    {
        case '+':
            printf("%f %c %f = %f\n",n1,ch,n2,(n1+n2));
            break;
        case '-':
            printf("%f %c %f = %f\n",n1,ch,n2,(n1-n2));
            break;
        case '*':
            printf("%f %c %f = %f\n",n1,ch,n2,(n1*n2));
            break;
        case '/':
            printf("%f %c %f = %f\n",n1,ch,n2,(n1/n2));
            break;
    }

    return 0;
}



/*
//EX7:
int main()
{
    int n,ans=1;
    printf("Enter an integer: ");
    fflush(stdin);fflush(stdout);
    scanf("%d",&n);
    if(n>0)
    {
        for(int i=1;i<=n;i++)
        {
            ans*=i;
        }
        printf("Factorial = %d\n",ans);
    }
    else if(n==0)
        printf("Factorial = 1\n");
    else
        printf("Error!!! Factorial of negative number doesn't exist\n");

    return 0;
}
*/


/*
//EX6:
int main()
{
    int n,sum=0;
    printf("Enter an integer: ");
    fflush(stdin);fflush(stdout);
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        sum+=i;
    }
    printf("Sum = %d\n",sum);
    //printf("Sum = %d\n",(n*(n+1))/2);       "easier way"

    return 0;
}
*/


/*
//EX5:

int main()
{
    char ch;
    printf("Enter a character: ");
    fflush(stdin);fflush(stdout);
    scanf("%c",&ch);
    if((ch>='a'&&ch<='z')||(ch>='A'&&ch<='Z'))
        printf("%c is an alphabet\n",ch);
    else
        printf("%c is not an alphabet\n",ch);

    return 0;
}
*/

/*
//EX4:

int main()
{
    float n;
    printf("Enter a number: ");
    fflush(stdin);fflush(stdout);
    scanf("%f",&n);
    if(n>0)
        printf("%.2f is positive.\n",n);
    else if(n<0)
        printf("%.2f is negative.\n",n);
    else
        printf("You entered zero.\n");

    return 0;
}
*/

/*
//EX3:
int main()
{
    float a,b,c;
    printf("Enter three number: ");
    fflush(stdin);fflush(stdout);
    scanf("%f%f%f",&a,&b,&c);
    if(a>b)
    {
        if(a>c)
            printf("Largest number = %.2f\n",a);
        else
            printf("Largest number = %.2f\n",c);
    }
    else
    {
        if(b>c)
            printf("Largest number = %.2f\n",b);
        else
            printf("Largest number = %.2f\n",c);
    }

    return 0;
}
*/


/*
//EX2:
int main()
{
    char ch;
    printf("Enter an alphabet: ");
    fflush(stdin);fflush(stdout);
    scanf("%c",&ch);
    switch(ch)
    {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
        case 'A':
        case 'E':
        case 'I':
        case 'O':
        case 'U':
            printf("%c is a vowel.\n",ch);
            break;
        default:
            printf("%c is a constant.\n",ch);
            break;
    }

    return 0;
}
*/

/*
//EX1:

int main()
{
    int n;
    printf("Enter an integer you want to check: ");
    fflush(stdin);fflush(stdout);
    scanf("%d",&n);
    if((n&1)==1)
        printf("%d is odd.",n);
    else
        printf("%d is even.",n);

    return 0;
}
*/


