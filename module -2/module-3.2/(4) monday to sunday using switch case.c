#include<stdio.h>
#include<conio.h>
int main()

{
	int choice;
	printf("menu\n");
	printf("1-sunday\t2-monday\t3-tuesday\t4-wednesday\t5-thursday\t6-friday\t7-satursday\n");
	printf("enter your option :");
    scanf("%d",&choice);
    switch (choice)
    {
    	case 1:
    		printf("sunday\n");
    		break;
    	case 2:
    		printf("monday\n");
    		break;
    	case 3:
    		printf("tuesday\n");
    	    break;
    	case 4:
    		printf("wednesday\n");
    		break;
    	case 5:
    		printf("thursday\n");
    		break;
    	case 6:
    		printf("friday\n");
    		break;
    	case 7:
    		printf("satursday");
    		break;
    		printf("invalid input");
	}
	getch();
	return 0;
}
