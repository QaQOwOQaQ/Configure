#include <stdio.h>
#include <string.h>

int look_keyword(const char *const words, const char **keyword, const int size)
{
	for(int i = 0; i < size; i ++ )
		if(strcmp(*(keyword + i), words) == 0) 
			return i;
	return -1;
}

int main() 
{
	const char *keyword[] = {

		"if",
		"else",
		"for",
	};
	int size = sizeof(keyword) / sizeof(keyword[0]);
	printf("size: %d\n", size);

	char *words = "for";
	printf("boolean: %d\n", look_keyword(words, keyword, size));

	return 0;
}
