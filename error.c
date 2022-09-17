#include<stdio.h>
#include<math.h>
int main()
{
float t_val,a_val,abs_err,rel_err,per_err;

printf("Enter the true value :   and approx value  : ");
scanf("%f",&t_val);
scanf("%f",&a_val);
abs_err=fabs(t_val-a_val);
rel_err=abs_err/t_val;
printf("\nabsolute error is %f\n",abs_err);
printf("\nrelative error is %f\n",abs_err/t_val);
printf("\npercentage error is %f\n",rel_err*100);
return 0;
}
