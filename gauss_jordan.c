#include<stdio.h>
#include<stdlib.h>
int n;//taling this 'n' global ,So it can be used in matrix operations while passing as function parameter 
//printing the matrix intermediate stages
void print(float mat[][n+1],int n)
{
printf("\nPrinting next internediate stage \n");
for(int i=0;i<n;i++)
{
    for(int j=0;j<n+1;j++)
    {
        printf("%f  ",mat[i][j]);
    }
    printf("\n");
}
}
//converting augmented matrix to diagonal matrix
void convert_to_dignol_matrix(float mat[][n+1],int n)
{
      for(int i=0;i<n;i++)
      {
        for(int j=0;j<n;j++)
        {
            if(i!=j)
            {   float ratio=mat[j][i]/mat[i][i];
                for(int k=0;k<n+1;k++)
                mat[j][k]=mat[j][k]-(ratio * mat[i][k]);
                print(mat,n);
                printf("\n\n");
            }

        }
      }
}
//calculating values of unknowns
void unknown(float mat[][n+1],int n)
{
    
    for(int i=0;i<n;i++)
    printf("\nvalues of X[%d] : %f\n",i,mat[i][n]/mat[i][i]);
}
int main()
{
    printf("GAUSS-Jordan\n\n");
    printf("Enter order of matrix : ");
    scanf("%d",&n);

    printf("\nEnter values of augmented matrix :\n");
    float  mat[n][n+1];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n+1;j++)
        {
        scanf("%f",&mat[i][j]);
        }
    }
    printf("\n");
    
    convert_to_dignol_matrix(mat,n);
    printf("\n");
    print(mat,n);
    printf("\n");
    unknown(mat,n);

    return 0;
}
