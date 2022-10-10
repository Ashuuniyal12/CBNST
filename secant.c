#include<stdio.h>
#include<math.h>
#include<stdlib.h>

float f(float x){
    //return x*x*exp(-x/2)-1;
     return x*x*x -(5*x)+1;
}

int main(){
    printf("Name= Ashutosh Uniyal, Sec=C, RollNo=13\n");
    float a,b;
    int flag =1;

    do{
        printf("Enter two roots ");
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
    do{	
	    x=a-((a-b)/(f(a)-f(b))*f(a));
        itr++;
        printf("\nIteration no : %d,roots are %f %f , value at current iteration is : %f \n", itr,a,b, f(x));

        if(fabs(f(x)) <= err){
            flag=0;
            printf("Root of equation is %f\n",x);
        }
        b=a;
	    a = x;
    }while(flag);
}