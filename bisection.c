#include<stdio.h>
#include<math.h>

float f(float x)
{
return (x*x*x)-(5*x)+1;
}

int main(void)
{

float x0,x1,err;

do{
   printf("Enter the value of x0 and x1 : ");
   scanf("%f%f",&x0,&x1);
   if(f(x0)*f(x1)>=0)
       printf("\nWrong Interval , try again...\n");
  }while(f(x0)*f(x1)>=0);
  
  printf("\nEnter allowed error : ");
  scanf("%f",&err);
  
  float x=(x0 + x1)/2;
  int i=1;
  
  while(fabs(f(x))>err)
  {
  printf("%d interval , value of x  = %f ,  value of f(%f) = %f\n",i++,x,x,f(x));
  if(f(x0)*f(x)<0)
  x1=x;
  else
  x0=x;
  
  x=(x0+x1)/2;
  }
  printf("\nRoot of equation atfer %d interval is : %f\n",i-1,x);
  return 0;
}
