// WAP IN C TO DEDUCE ERROR  IN Involved ANY POLYNOMIAL EQUATION .

#include<stdio.h>
#include<math.h>


int main(){
    printf("Name = Ashutosh Uniyal Sec = C RollNo=13\n");

	float abError , reError , perError , t_val , a_val;

	printf("Enter Ture value = ");
	scanf("%f" , &t_val);

	printf("Enter approx value = ");
	scanf("%f" , &a_val);

	abError = fabs(t_val - a_val);

	reError = abError / t_val;

	perError = reError * 100;


	printf("The absolute Error is = %f \n" , abError);
	printf("The relative Error is = %f  \n" , reError);
	printf("The percentage Error is = %f \n" , perError);

	return 0;



}
