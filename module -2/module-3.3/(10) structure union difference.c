#include<stdio.h>

struct employee
{
	int id;
	char name[50];
}st;
union employee2
{
	int id;
	char name[50];
}s;

int main()
{
	printf("\tSTRUCTER\n\n");
	{
        printf("enter id : ");
        scanf("%d",&st.id);
        printf("enter your name : ");
        scanf("%s",&st.name);
        printf("\n");
        printf("your id is = %d\nyour name is = %s",st.id,st.name);
   }
   printf("\n\n\tUNION\n\n");
   {
   	   printf("enter your id : ");
   	   scanf("%d",&s.id);
   	   printf("enter your name : ");
   	   scanf("%s",&s.name);
   	   printf("\n");
   	   printf("your id is = %d\nyour name is = %s",s.id,s.name);
   }


return 0;

}
