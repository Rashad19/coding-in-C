#include <stdio.h>

int main()

{
	int date, month, year, Age,Age1, today,monthtoday,yeartoday, diffmonth1;

	unsigned int diffmonth; 


printf("Hello World!\n");

printf("Enter your day of birth: "); 
scanf("%i", & date);
printf("Enter your month of birth: ");
scanf("%i", & month);
printf("Enter your year of birth: ");
scanf("%i", & year);

printf("Your were born on %i/%i/%i\n", date, month, year );

monthtoday = 5;

yeartoday = 2020;

diffmonth =  monthtoday - month;
Age = yeartoday - year ;
Age1= Age-1;
diffmonth1 = diffmonth + 12;

if(month == monthtoday) 

{ 

	printf("You are %i years old\n", Age);


}

else if (month>monthtoday)  {
	 
	 	printf("You are %i years and %i months old \n", Age1,diffmonth1);

}

else

	{

	printf("You are %i and %i months old \n", Age, diffmonth );
}
	 
		return 0;


	}

	
