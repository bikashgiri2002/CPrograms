#include<stdio.h>
void main()
{
	int user_id,password;
	printf("enter the user_id");
	scanf("%d",&user_id);
	switch(user_id)
	{
		case 1000:
			printf("enter the password");
			scanf("%d",&password);
			switch(password)
			{
				case 7071:
					printf("successfully log in");
					break;
					default:
						printf("wrong password");
						
			}
			break;
    }  
			
			default:
				printf("wrong user_id");
	
}
