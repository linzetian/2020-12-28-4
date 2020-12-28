//make use of the function about fgets
#include<stdio.h>
#include<errno.h>
#include<string.h>
int main()
{
	char ch[1000] = {0};
	FILE* spread = fopen("F:\\c语言基础\\test1.txt", "r");//r is mean of read(output)
	if (spread == NULL)
	{
		printf("%s\n", strerror(errno));
		return 0;
	}
	//read the file
	printf("%s", fgets(ch, 1000, spread));
	printf("%s\n", fgets(ch, 1000, spread));
	fclose(spread);
	spread = NULL;
	return 0;
}