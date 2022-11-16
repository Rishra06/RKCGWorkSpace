#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(int argc, char *argv[5])
{
	int i = 0;
	int j;
	
	for(i = 0; i <argc; i++)
	{
		printf("argv[%d] = %s\n", i, argv[i]);
	}

	int main(void);

	int name;
	int hold;
	int last;

	for(i = last; i > 0; i--)
	{
		for(j = 1; j <= i; j++)
			if(strcmp(name[j],name[j - 1]) < 0)
			{
				strcpy(hold, name[j]);
				strcpy(name[j], name[j-1]);
				strcpy(name[j-1],hold);
				printf("%s\n", name[0]);
			}
		return 0;
	}
