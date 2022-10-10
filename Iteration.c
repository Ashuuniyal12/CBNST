#include<stdio.h>
#include<math.h>
#include<stdlib.h>
float fi(float x){
      return (cos(x)+1)/3;
}
float diff(float x){
       return -(sin(x))/3;
}
int main()
{
     printf("Name= Ashutosh Uniyal, Sec=C, RollNo=13\n");
     float x,x1,toll=0.000;
     int flag =1,i=0;
     do{
     
     printf("Enter root");
     scanf("%f", &x);
     
     if(diff(x)<1)
          flag =0;
      else 
          printf("Invalid Root !! ,Please Enter Correct Vlaue\n");    
         
     }while(flag);
     flag =1;
     float prev;
     printf("Enter tollerance value ");
     scanf("%f", &toll);
     
     do{
         if(fabs(fi(x)-prev)<=toll)
            flag =0;
        else{
         i++;
         x1 =  fi(x);
         printf("Iteration No : %d, Value of iteration: %f\n", i, fi(x));
         x= prev= x1;
           
        }
         
     }while(flag);
     return 0;
}