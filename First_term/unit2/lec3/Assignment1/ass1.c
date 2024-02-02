#include "stdio.h"
/*                  #####Home_work-1###############                 */


//Ex(7):

int main()
{
    float a,b,sum;
    printf("##########Console-output###\n");
    printf("Enter value of a: ");
    fflush(stdin);fflush(stdout);
    scanf("%f",&a);
    printf("Enter value of b: ");
    fflush(stdin);fflush(stdout);
    scanf("%f",&b);

    sum=a+b;
    a=sum-a,b=sum-b;

    printf("\nAfter swapping, value of a = %f\n",a);
    printf("After swapping, value of b = %f\n",b);
    printf("###########################\n");

    return 0;
}

/*
//Ex(6):
int main()
{
    float a,b,temp;
    printf("##########Console-output###\n");
    printf("Enter value of a: ");
    fflush(stdin);fflush(stdout);
    scanf("%f",&a);
    printf("Enter value of b: ");
    fflush(stdin);fflush(stdout);
    scanf("%f",&b);

    temp=a;
    a=b;
    b=temp;

    printf("\nAfter swapping, value of a = %f\n",a);
    printf("After swapping, value of b = %f\n",b);
    printf("###########################\n");

    return 0;
}
*/

/*
Ex(5):
int main()
{
    char ch;
    printf("##########Console-output###\n");
    printf("Enter a character: ");
    fflush(stdin);fflush(stdout);
    scanf("%c",&ch);
    printf("ASCII value of %c = %d\n",ch,ch);
    printf("###########################\n");

    return 0;
}
*/

/*
//Ex(4):
int main()
{
    float n1,n2,ans;
    printf("##########Console-output###\n");
    printf("\n###########################\n");
    printf("Enter two numbers: ");
    fflush(stdin);fflush(stdout);
    scanf("%f%f",&n1,&n2);
    ans=n1*n2;
    printf("Product: %.6f\n",ans);

    return 0;
}

*/

/*
//EX(3):

int main()
{
    int n1,n2,sum=0;
    printf("##########Console-output###\n");
    printf("Enter two integers: ");
    fflush(stdin);fflush(stdout);
    scanf("%d%d",&n1,&n2);
    sum=n1+n2;
    printf("Sum: %d\n",sum);
    printf("###########################\n");

    return 0;
}
*/



/*
//Ex(2):

int main()
{
    int x;
    printf("##########Console-output###\n");
    printf("Enter a integer: ");
    fflush(stdin);fflush(stdout);
    scanf("%d",&x);
    printf("You entered: %d\n",x);
    printf("###########################\n");

    return 0;
}
*/


/*
//Ex(1):

int main()
{

    printf("##########Console-output###\n");
    printf("C Programming\n");
    printf("###########################\n");

    return 0;
}
*/
