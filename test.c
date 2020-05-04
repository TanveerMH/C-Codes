#include <stdio.h>
int num;
int main()
{
  do{

	 printf("Compass reading? ");
	 scanf("%d",&num); //here programme will take input from user

     if (num>=0)
      {


		 if (num>=0 && num <=44) // this is neasted loop
		 {
			printf("North.\n\n"); //if input match the condition print this line
		 }

         else if (num>=45 && num <=134)
		 {
			printf("East.\n\n");
		 }
         else if (num>=135 && num <=224)
		 {
			printf("South.\n\n");
		 }
         else if (num>=225 && num <=315)
		 {
			printf("West.\n\n");
		 }
         else if(num < 0 || num > 315)
         {
            printf("Invalid\n\n"); //if user input ivalid num programme will show this message
         }

     }
    else
    {
    printf("Bye..\n\n"); // if user input minus programme will stop.
	}
  }
   while (num>-1); //programme will run untill input is minus


 return 0;
}
