#include <stdio.h>
#include <string.h>
void parser(char *str)
{
	int n = strlen(str);
	int i, in = 1, index = 0;
	for (i = 0; i < n; i++)
	{
		if (str[i] == '<')
		{
			in = 1;
			continue;
		}
		if (str[i] == '>')
		{
			in = 0;
			continue;
		}
		if (in == 0)
		{
			str[index] = str[i];
			index++;
		}
		str[index] = '\0';
	}
	while (str[0] == ' ')
	{
		for (i = 0; i < n; i++)
		{
			str[i] = str[i + 1];
		}
	}
	while (str[strlen(str)-1]==' ')
	{
		str[strlen(str)-1]='\0';
	}
	
}
int main()
{
	char tag[] = "<h1>  This is a heading  <\h1>";
	parser(tag);
	printf("~~%s~~\n", tag);
	return 0;
}
