#include<stdio.h>
#include<stdlib.h>
#include<math.h>
double f(double x)
{
    double res = (cos(x)+1)/3 ;
    return res ;
}
double dx(double x)
{
    double res = -sin(x)/3 ;
    return res ;
}
int main()
{
    printf("\nYogesh singh yadav / 20011983 / A\n");
    //double a , b ;
    double a_err ;
    printf("\nEnter Allowed Error : ");
    scanf("%lf",&a_err);
    int flag = 0 , i= 0 , n ;
    printf("Enter No. of Iterations : ");
    scanf("%d",&n);
    float res ;
    // Checking condition f(a)*f(b) < 0
    while(1)
    {
        res = dx(i) ;
        if(res<1){
            break ;
        }
        else{
            i++ ;
        }
    }
    float x1 , x0 = i ;
    i = 0; 
    do
    {
       x1 = f(x0) ;
       printf("x%d = %lf \n",i+1,x1) ;
       i++ ;
       x0= x1 ; 
       if(i==n){
           break ;
       }
    }while(fabs(f(x0))>a_err);
    printf("Root of Equation x = %lf \n",x0);
    return 0 ;
}
