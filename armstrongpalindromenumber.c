#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/* BURAK UGAR HW 4 200104004100 */
int isPalindrome(int n) /* function determines whether fiven number is palindrome or not */
{   
int a,temp=0,b=n;
for(;n>0;) /* till the number will be negative we divide it by 10 at each iteration */
{
	a=n%10; /* at each iteration we are finding the last digit and divide the number by 10 then rebuilding the number by using temp variable and a which is the digits of the number */
	n/=10;
	temp=temp*10+a;
}
	if(temp==b) /* if the temporary number is equals to number itself then the number is palindrome */
		{
 		return 1;
		}
	else
		{
	return 0;
 		}
}
int isArmstrong(int n){ /* function that controls whether the given number is amstrong or not */
	
	int num,temp,sum=0,rem;
   /* Since the value of variable num will alter in the for loop†we will save it in a different variable to compare results lastly */
   temp = n;

   /*adding 3th power of every digit and storing that value at each iteratipn
    */ 
   for (;n != 0;n/=10)
   {
      rem = n % 10;
      sum += (rem*rem*rem);
   }

   /* If the sum of each digit's cubes equals the number itself return 1.
    */
   if(temp == sum)
      return 1;
   else
     return 0;
 	
}
void decideArm_Pal(){ /* program wait from user to enter right value and stops when the user ennter the right integer value */
/* and checks the given value is amstrong or palindrome */
	float n ,flag=0;
	printf("Please enter an integer number: ");
	do{ 
	scanf("%f",&n);
	if(n<0){
		printf("Please enter a positive value: ");
	}
	else if(isInteger(n)==0){
		printf("Please enter an integer not a float or double : ");
	}
	else{
	n= (int)n;
	if(isArmstrong(n)==1 &&isPalindrome(n)==1){
		printf("This number is both Palindrome and Armstrong number.\n");
		flag=1;
	}
	else if(isArmstrong(n)==1&& isPalindrome(n)==0 ){
		printf("This number is only Armstrong number.\n");
		flag=1;
	}
	else if(isArmstrong(n)==0&& isPalindrome(n)==1 ){
		printf("This number is only Palindrome .\n");
		flag=1;
	}
	else if(isArmstrong(n)==0&& isPalindrome(n)==0 ){
		printf("This number does not satisfy any special cases.\n");
		flag=1;
		}
		}
	}
	while(flag!=1);
	
}
}int main(){
    return 0;
}