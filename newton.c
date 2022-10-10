#include<stdio.h>
#include<math.h>
#include<stdlib.h>

float f(float x){
    //return x*x*x -(5*x)+1;
    return 3*x-cos(x)-1;
}
float d(float x){
    //return 3*x-5;
    return 3+sin(x);
}

int main(){
    printf("Name= Ashutosh Uniyal, Sec=C, RollNo=13\n");
    float a,b;
    int flag =1;

    do{
        printf("Enter two approximate roots ");
        scanf("%f %f", &a, &b);

        if(f(a)*f(b)<0)
            flag=0;
        else
            printf("Invalid Roots ,Please Enter Correct values\n");
    }while(flag);

    flag =1;
    float err,x;
    int itr=0;
    printf("Enter allowed error value ");
    scanf("%f", &err);

    printf("Enter mid value  ");
    scanf("%f", &x);

    do{
        itr++;
        printf("\nIteration no : %d,value of x is : %f , value at current iteration is : %f \n", itr,x, f(x));

        if(fabs(f(x)) <= err){
            flag=0;
            printf("Root of equation is %f",x);
        }
	x = x-(f(x)/d(x));
    }while(flag);
}