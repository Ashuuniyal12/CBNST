#include<stdio.h>
#include<math.h>
#include<stdlib.h>

float f(float x){
    return x+3*sin(x)-exp(x);
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
    float err,mid;
    int itr=0;
    printf("Enter allowed error value ");
    scanf("%f", &err);



    do{
        itr++;
        mid = a-((a-b)/(f(a)-f(b)) *f(a));

        printf("\nIteration no : %d,roots are %f %f , value at current iteration is : %f \n", itr,a,b, f(mid));

        if(fabs(f(mid)) <= err){
            flag=0;
            printf("Root of equation is %f",mid);
        }
    
        if(f(a)*f(mid)<0)
            b=mid;
        else if(f(b)*f(mid)<0)
            a = mid;
        
    }while(flag);
}