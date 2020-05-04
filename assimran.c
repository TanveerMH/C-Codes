#include <stdio.h>
int main()
{	 int num;
	 printf("Compass reading? ");
	 scanf("%d",&num);

	do{
		if (num>=0 && num <=44)
		{
			Printf("North.");
		}

	else if (num>=45 && num <=134)
		{
			Printf("East.");
		}
	else if (num>=135 && num <=224)
		{
			Printf("South.");
		}
	else if (num>=225 && num <=315)
		{
			Printf("West.");
		}
	else
	    printf("Invalid");


}
while (num<0);

printf("Bye..");







return 0;
}
