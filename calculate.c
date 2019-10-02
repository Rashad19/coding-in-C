#include <stdio.h>


int main()

{
	int date, month, year, Age ;

printf("Hello World!\n");

printf("Enter your day of birth: "); 
scanf("%i", & date);
printf("Enter your month of birth: ");
scanf("%i", & month);
printf("Enter your year of birth: ");
scanf("%i", & year);

printf("Your were born on %i/%i/%i\n", date, month, year );

Age = 2019 - year ;

printf("You are %i years old!\n", Age);

return 0;

}