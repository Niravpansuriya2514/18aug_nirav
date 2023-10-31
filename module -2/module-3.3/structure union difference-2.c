#include<stdio.h>

struct employee{
	int id;
	char name[50];
}st;

int main()
{

printf("enter id: ");
scanf("%d",&st.id);
printf("enter your name : ");
scanf("%s",&st.name);
printf("\n");
printf("id = %d\nname = %s",st.id,st.name);


return 0;

}
