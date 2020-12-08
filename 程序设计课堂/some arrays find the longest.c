#include <stdio.h>
#include <string.h>
#define N 5
#define M 81
int *fun(char (*sq)[M])

{
	int i; char *sp;
	sp=sq[0];
	for(i=0;i<N;i++)
		if(strlen( sp)<strlen(sq[i]))
			sp=sq[i];
	return sp;
	
}
int main()
{
	char str[N][M], *longest; int i;
	
	
	for(i=0; i<N; i++)
		scanf("%s",str[i]);
	
	printf("The %d string :\n",N);
	
	for(i=0; i<N; i++) 
		puts(str[i]);
	longest=fun(str);
		
	printf("The longest string :\n");
	puts(longest);
	
	return 0;
}
