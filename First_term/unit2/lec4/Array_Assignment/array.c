#include <stdio.h>
/*                      HW Arrays                           */


//EX5:
int main()
{
    int a[500],n;
    printf("Enter no of elements : ");
    fflush(stdin);fflush(stdout);
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }

    int num;
    printf("Enter the element to be searched : ");
    fflush(stdin);fflush(stdout);
    scanf("%d",&num);

    for(int i=0;i<n;i++)
    {
        if(num==a[i])
        {
            printf("number found at the location = %d \n",i+1);
            return 0;
        }
    }
    printf("number not found");
    return 0;
}



/*
//EX4:
int main()
{
    int a[500],n;
    printf("Enter no of elements : ");
    fflush(stdin);fflush(stdout);
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }

    int num,x;
    printf("Enter the element to be inserted : ");
    fflush(stdin);fflush(stdout);
    scanf("%d",&num);
    printf("Enter the location : ");
    fflush(stdin);fflush(stdout);
    scanf("%d",&x);
    x--;
    for(int i=n-1;i>=x;i--)
    {
        a[i+1]=a[i];
    }
    a[x]=num;

    for(int i=0;i<n+1;i++)
    {
        printf("%d ",a[i]);
    }
    return 0;
}
*/


/*
//EX3:
int main()
{
    int a[500][500];
    int r,c;
    printf("Enter rows and column of matrix:");
    fflush(stdin);fflush(stdout);
    scanf("%d%d",&r,&c);
    printf("Enter the elements of matrix:\n");
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            printf("Enter element a%d%d: ",i+1,j+1);
            fflush(stdin);fflush(stdout);
            scanf("%d",&a[i][j]);
        }
    }
    printf("Entered Matrix:\n");
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            printf("%d  ",a[i][j]);
        }
        printf("\n\n");
    }
    printf("Transpose of Matrix:\n");
    for(int i=0;i<c;i++)
    {
        for(int j=0;j<r;j++)
        {
            printf("%d  ",a[j][i]);
        }
        printf("\n\n");
    }
    return 0;
}
*/


/*
//EX2:
int main()
{
    float arr[500],sum=0;
    int n;
    printf("Enter the number of data: ");
    fflush(stdin);fflush(stdout);
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        printf("%d. Enter number: ",i+1);
        fflush(stdin);fflush(stdout);
        scanf("%f",&arr[i]);
    }
    for(int i=0;i<n;i++)
    {
        sum+=arr[i];
    }

    printf("Average = %0.2f",sum/n);
    return 0;
}

*/



/*
//EX1:
int main()
{
    float a[2][2],b[2][2];
    printf("Enter the elements of 1st matrix\n");
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<2;j++)
        {
            printf("Enter a%d%d: ",i+1,j+1);
            fflush(stdin);fflush(stdout);
            scanf("%f",&a[i][j]);
        }
    }
    printf("Enter the elements of 2nd matrix\n");
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<2;j++)
        {
            printf("Enter b%d%d: ",i+1,j+1);
            fflush(stdin);fflush(stdout);
            scanf("%f",&b[i][j]);
        }
    }
    printf("\nSum Of Matrix:\n");
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<2;j++)
        {
            printf("%0.1f\t",a[i][j]+b[i][j]);
        }
        printf("\n");
    }
    return 0;
}
*/
