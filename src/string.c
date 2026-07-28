#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define BUFFER_SIZE 100


// string.h Library
// - strcpy (문자열 복사)
// - strlen (문자열의 길이)
// - strcat (문자열 합치기)
// - strcmp (문자열 비교)


int main(void)
{
	char *words[100];
	int n = 0; // number of strings
	char buffer[BUFFER_SIZE];

	
	while(n < 4 && scanf("%s", buffer) != EOF)
	{
	// words[n] = strcpy(words[n], buffer)
		words[n] = strdup(buffer);
		n++;
	}
		
	for(int i = 0; i < 4; i++)
	{
		printf("%s\n", words[i]);
	}
}


char * strdup(char *s) {
	char *p;
	p = (char *)malloc(strlen(s) + 1); // \0 까지 포함해야 하므로 +1
	
	if(p != NULL){
		strcpy(p, s);
	}

	return p;
}