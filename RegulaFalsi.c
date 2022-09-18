#include<stdio.h>
#include<stdlib.h>
#include<math.h>
double f(double x)
{
    double res = 3*x + sin(x) - exp(x) ;
    return res ;
}
int main()
{
    printf(" Yogesh singh yadav / 20011983 /A\n");
    double x0 , x1 ;
    int flag = 0 ;
    // Checking condition f(a)*f(b) < 0
    do
    {
        printf("Enter Value of a and b : ") ;
        scanf("%lf%lf",&x0,&x1) ;
        if(f(x0)*f(x1)<0)
        {
            flag = 1 ;
            printf("Range is Correct") ;
            double a_err ;
            printf("\nEnter Allowed Error : ");
            scanf("%lf",&a_err);
            int i = 0 , j = 1 , k =2 ;
            double x=x0, x2 ;
            do
            {
                x2 = x0 - ((x1-x0)*f(x0))/(f(x1)-f(x0)) ;
                printf("x%d = %lf \n",k++ ,x2);
                if(f(x2)<0){
                    x0 = x2 ;
                }
                else{
                    x1 = x2;
                }
                x = x2;
            }while(fabs(f(x))>a_err); 
            printf("Root of Equation x = %lf \n",x) ; 
        }
        else
        {
            printf("Range is Incorrect \n");
        }
    }while(flag!=1);
    return 0 ;
}
