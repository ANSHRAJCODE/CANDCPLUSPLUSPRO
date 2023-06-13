#include <stdio.h>

int main() 
{

    double num;
    printf("Enter a number: ");
    scanf("%lf", &num);
    if(num>0)
    {
        printf("you entered positive no.");

    }
else if(num<0)
{
    printf("you entered negative no.");

}
else 
{
    printf("you entered 0");

}
    return 0;
}