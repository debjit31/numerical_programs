#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int wrd_l,crc_l;
void  calculate(char *wrd, char *crc)
{
	int i;
	char *tmp = (char*)malloc(strlen(crc)*sizeof(char));
	for(i=0;i<strlen(crc);i++)
	{
		tmp[i] = wrd[i];
	}
	puts(tmp);
}
void gen(char *wrd, char *crc)
{
	int i,j=0;
	for(i=wrd_l;i<(wrd_l+crc_l-1);i++)
	{
		wrd[i] = '0';
	}
	wrd[i] = '\0';
	puts(wrd);
	calculate(wrd,crc);
}
int main()
{
	char *wrd, *crc;
	//int wrd_l,crc_l;
	printf("Enter the word length and crc length :- ");
	scanf("%d%d",&wrd_l,&crc_l);
	crc=(char*)malloc(crc_l*sizeof(char));
	wrd=(char*)malloc((wrd_l+crc_l-1)*sizeof(char));
	fflush(stdin);
	printf("Enter the word:- ");
	gets(wrd);
	printf("Enter the crc generator :- ");
	gets(crc);
	gen(wrd,crc);
	
}
