#include<stdio.h>
#include<math.h>
#define PI 3.14159
#include<windows.h>

void table();
void add();
void sub();
void mult();
void di();
void sini();
void cosi();
void tani();
void logi();
void expo();
void erro();
void selet();
int factorial(int n);
float numerator(float ,int );
float cosine(float , int );
float sine(float , int );
void po();
void sq();

void main()
{
    char con='y';
    label:
    system ("cls");
    printf("***********SCIENTIFIC CALCULATOR*************\n\n");
    table();
    printf(" Select what you want to do: ");
    if(con=='Y' || con=='y')
    {
            selet();
    }
    printf("\nDo you want to continue(Y/N)");
    scanf(" %c",&con);
    if(con == 'Y' || con=='y')
        {
            goto label;
        }
}
void table()
{
    printf(" 1.Addition          -  + \n\n");
    printf(" 2.subtraction       -  - \n\n");
    printf(" 3.Multiplication    -  * \n\n");
    printf(" 4.Division          -  / \n\n");
    printf(" 5.sine function     -  s \n\n");
    printf(" 6.cosine function   -  c \n\n");
    printf(" 7.tan function      -  t \n\n");
    printf(" 8.Natural log       -  l \n\n");
    printf(" 9.exponential       -  e \n\n");
    printf("10.power function    -  p \n\n");
    printf("11.square root       -  q \n\n");
}
void erro()
{
    printf("invalid input \n");
}
void selet()
{
    char c;
    fflush(stdin);
    scanf(" %c",&c);
    switch(c){
        case '+':
            add();
        break;
        case '-':
            sub();
        break;
        case '*':
            mult();
        break;
        case '/':
            di();
        break;
        case 's':
            sini();
        break;
        case 'c':
            cosi();
        break;
        case 't':
            tani();
        break;
        case 'l':
            logi();
        break;
        case 'e':
            expo();
        break;
        case 'p':
            po();
        break;
        case 'q':
            sq();
        break;
        default:
            erro();
        break;
    }
}
void add()
{
    float sum=0,i;
    char a;
    printf("enter '=' for final result\n");
    while(a!= '=')
    {
        printf("enter number:");
        scanf("%f",&i);
        sum=sum+i;
        printf("sum= %.3f",sum);
        printf("\nenter either + or =\n");
        scanf(" %c",&a);
    }
    printf("final result =%.3f \n",sum);
}
void sub()
{
    float diff,i;
    char a;
    printf("enter '=' for final result\n");
    printf("enter number to be subtracted:");
    scanf("%f",&diff);
    while(a!= '=')
    {
        printf("enter number that will subtract:");
        scanf("%f",&i);
        diff=diff-i;
        printf("difference= %.3f",diff);
        printf("\nenter either - or =\n");
        scanf(" %c",&a);
    }
    printf("final result=%.3f \n",diff);
}
void mult()
{
    float mu=1,i;
    char a;
    printf("enter '=' for final result\n");
    while(a!= '=')
    {
        printf("enter number:");
        scanf("%f",&i);
        mu=mu*i;
        printf("product= %.3f",mu);
        printf("\nenter either * or =\n");
        scanf(" %c",&a);
    }
    printf("final result=%.3f \n",mu);
}
void di()
{
    float di,i;
    char a;
    printf("enter '=' for final result\n");
    printf("enter number to be divided:");
    scanf("%f",&di);
    while(a!= '=')
    {
        printf("enter divisor:");
        scanf("%f",&i);
        di=di/i;
        printf("quotient= %.3f",di);
        printf("\nenter either / or =\n");
        scanf(" %c",&a);
    }
    printf("final result=%.3f \n",di);
}
void sini()
{
     float degree,radian,result;
    int n;
    printf("Enter the angle in degree: ");
    scanf("%f",&degree);
    printf("Enter the iteration: ");
    scanf("%d",&n);
    radian = degree * PI / 180;
    result = sine(radian,n);
    printf("\n");
    printf("sin%.2f = %.3f",degree,result);
}
void cosi()
{
    float degree,radian,result;
    int n;
    printf("Enter the angle in degree: ");
    scanf("%f",&degree);
    printf("Enter the iteration: ");
    scanf("%d",&n);
    radian = degree * PI / 180;
    result = cosine(radian,n);
    factorial(n);
    printf("\n");
    printf("cos%.2f = %.3f",degree,result);
}
void tani()
{
    float degree,radian,result;
    printf("Enter angle in degree:");
    scanf("%f",&degree);
    radian=degree*PI/180;
    result=sin(radian)/cos(radian);
    printf("tan %.3f =%.3f",degree,result);
}
void logi()
{
    float value,result=0;
    int i,n,j=1;
    printf("Enter value :");
    scanf("%f",&value);
    printf("Enter the iteration: ");
    scanf("%d",&n);
        for(i=1;i<=n;i++)
        {
            result=result+(pow(((value-1)/(value+1)),j)/j);
            j+=2;
        }
    result=result*2;
    printf("\n");
    printf("ln(%.2f) = %.3f",value,result);
}
void expo()
{
    float value,result=1;
    int i,n;
    printf("Enter power of e: ");
    scanf("%f",&value);
    printf("Enter the iteration: ");
    scanf("%d",&n);
        for(i=1;i<=n;i++)
        {
            result+=numerator(value,i)/factorial(i);
        }

    printf("\n");
    printf("e^%.2f = %.3f",value,result);
}
int factorial(int n)
{
    if(n==0)
        return 1;
    else if (n==1)
        return 1;
    else
        return (n*factorial(n-1));
}
float numerator(float x,int y)
{
    float z;
    z=pow(x,y);
    return z;
}
float sine(float an, int n)
{
    if (an == 0 || n == 0)
        return 0;
    else
        return (-1*pow(-1,n)*pow(an,2*n-1)/factorial(2*n-1) + sine(an, n - 1));
}
float cosine(float an, int n)
{
    if (an == 0 || n==0 )
        return 1;
    else
        return (pow(-1,n)*pow(an,2*n)/factorial(2*n) + cosine(an, n - 1));
}
void po()
{
    int n;
    float nu,result;
    printf("Enter number:");
    scanf(" %f",&nu);
    printf("Enter power:");
    scanf(" %d",&n);
    result=pow(nu,n);
    printf("Result = %.3f",result);
}
void sq()
{
    float nu,result;
    printf("Enter number:");
    scanf(" %f",&nu);
    result=sqrt(nu);
    printf("Square root of %.3f is %.3f",nu,result);
}
