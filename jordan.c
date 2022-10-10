#include<stdio.h>
#include<math.h>

int main(){
    printf("Name= Ashutosh Uniyal, Sec=C, RollNo=13\n");
    int n;
    printf("Enter the order of the matrix = ");
    scanf("%d" , &n);
    
    // Step 1 : Take input from the user

    float arr[n][n+1];
	printf("Enter the matrix \n");
    for(int i = 0 ; i<n ; i++)
    {
        for(int j = 0 ; j < n+1 ; j++){
            scanf("%f" , &arr[i][j]);
        }
    }

    for(int i =0 ;i< n;i++){
        for(int j = 0;j<n;j++){
            if(j!=i){
                float ratio = arr[j][i]/arr[i][i];
                for(int k =0 ;k<n+1;k++){
                    arr[j][k] = arr[j][k] - ratio * arr[i][k];
                }
            }
        }
    }

    printf("After Converting to upper triangular matrix \n");

    for(int i = 0 ; i < n ; i++)
    {
        for(int j = 0 ; j < n+1 ; j++)
        {
            printf("%0.2f ",arr[i][j]);
        }
        printf("\n");
    }

    printf("The values are = \n");
    
    for(int i = 0 ; i < n ; i++){
        printf("The value of x%d =  %f\n" , i , arr[i][n]/arr[i][i]);
    }
    return 0;
}