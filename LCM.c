//write a c program to find LCM of two numbers
#include <stdio.h>

int gcd_calculation(int num1, int num2){
	
	//finding the GCD 
	while(num1 % num2 != 0){
		num3 = num1 % num2;
		num1 = num2;
		num2 = num3 
	}
	
	return num2;
}

int lcm_calculatio(){	
	int lcm = (number1 * number2) / gcd_calculation(number1,number2) ;
	printf("lCM of two numbers : %d \n",lcm);
	
}


int main(){
	//user inputs
	int number1, number2;
	
	printf("Please enter two integer numbers : ");
	scanf("%d %d",&number1, &number2);
	
	//GCD function call starts
	gcd_calculation(number1, number2);
	
	//LCM function call starts
	lcm_calculation(number1,number2);
	
	//checking user wants to continue or not
	do{
	printf("Enter 'Y' for continue or Enter 'N' for end the program ");
	scanf("%s",&user_input);
	 if ( user_input  != 'Y' && user_input != 'N' ) {
			   printf("please try again : \n");
     
			}
	//if user input is 'Y' it calcuates gcd and lcm
	else if(user_input == 'Y'){
		printf("Please enter two integer numbers : ");
		scanf("%d %d",&number1, &number2);
		
		lcm_calculation(number1,number2);
		continue;
		
	
	//if user input is 'N' exit the program
	else if(user_input == 'N') 
		return 0;
		
	}
	}while(user_input != 'N');
	
	return 0;
}
