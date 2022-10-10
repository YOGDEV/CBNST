#include<stdio.h>
#include<math.h>
#include<stdlib.h>

int n;
//to check that this is valid queations or not
int check_matrix(int mat[n][n+1],int n)
{
    int i,j;
    float sum=0;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(i!=j)
            {
            sum+=abs(mat[i][j]/mat[i][i]);//if a>b then a/b will give zero...
            }
            
        }
        if(sum>1)return -1;

    }
    return 0;
}

//main function
int main()
{
    printf("\nYogesh Singh Yadav.../ 20011983.../ A\n ");
//printf("Shubhanshu kaintura // 20011778 //\nA");
    printf("Enter order of matrix : ");
    scanf("%d",&n);
    float error;
    printf("\nEnter error : ");
    scanf("%f",&error);
    int mat[n][n+1];
    float value[n];
    for(int i=0;i<n;i++)value[i]=0;
    printf("\nEnter arumented matrix : \n");
    
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n+1;j++)
        {   
            scanf("%d",&mat[i][j]);
        }
    }
   if(check_matrix(mat,n)==-1)
   {
    printf("\nNot valid equations : \n");
    exit(0);//not valid matrix
   }
   int flag;
   do{
    flag=1;

    for(int i=0;i<n;i++)
    {   float temp=value[i];
        float sum=0;

        for(int j=0;j<n;j++)
        {  
            if(i!=j){
            sum+=mat[i][j]*value[j];
            }

        }
        value[i]=(mat[i][n]-sum)/mat[i][i];
        for(int k=0;k<n;k++)
        printf("%10.6f\t",value[k]);
        printf("\n");
        if(fabs(temp-value[i])>error)flag=0;
    }
   }while(flag==0);
   printf("\n\nPrinting final roots of the equation :\n");
   for(int i=0;i<n;i++)
   printf("%d : %f\n",i+1,value[i]);
   
    return 0;
}