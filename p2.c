# include<stdio.h>
int main()
{
    int a,b,lcm,hcf,i;
    printf("Enter two no.s:");
    scanf("%d %d",&a,&b);
    for(i=1;i<=a&&i<=b;++i)
    {
        if(a%i==0&&b%i==0)
hcf=i;
    }
printf("Hcf of two no.s %d and %d is %d:",a,b,hcf);
return 0;
    }

