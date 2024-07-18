#include<stdio.h>
#include<conio.h>

void main()
{
	int mark;
	char grade;
	
	printf("Enter Your Marks :");
	scanf("%d",&mark);
	
	(mark>=80 && mark<=100)?
		printf("Your grade is A\n",grade='A'):
		(mark>=60 && mark<=80)?
			printf("Your grade is B\n",grade='B'):
				(mark>=40 && mark<=60)?
					printf("Your grade is C\n",grade='C'):
						(mark>=30 && mark<=40)?
							printf("Your grade is D\n",grade='D'):
								(mark>=0 && mark<30)?
									printf("Your grade is F\n",grade='F'):printf("enter valid marks");
									
	switch(grade)								
	{
		case'A':printf("Excellent work|n");
		break;
		case 'B':printf("well done\n");
		break;
		case 'C':printf("Good Job\n");
		break;
		case 'D':printf("You passed ,but you could do better\n");
		break;
		case 'F':printf("Sorry ,you failed\n");
		break;
	}
	if(grade=='A' || grade=='B' || grade=='C' || grade=='D')
	{
		printf("Excellent work! You are eligible for the next level.");
	}
	else
	{
		printf("Please Try Again Later");
	}
}


