#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void sender(char input[],char key[]);
void sender(char input[],char key[])
{
	int i,j,keylen,msglen;
	char temp[30],quot[100],rem[30],key1[30],fdata[100];
	keylen = strlen(key);
	msglen = strlen(input);
	strcpy(key1,key);
	for(i=0;i<keylen-1;i++)
		input[i+msglen] = '0';
	for(i=0;i<keylen;i++)
		temp[i] = input[i];
	for(i=0;i<msglen;i++)
	{
		quot[i] = temp[0];
		if(quot[i] == '0')
		{
			for(j=0;j<keylen;j++)
				key[j] = '0';
		}
		else
		{
			for(j=0;j<keylen;j++)
				key[j] = key1[j];
		}
		for(j=keylen-1;j>0;j--)
		{
			if(temp[j] == key[j])
				rem[j-1] = '0';
			else
				rem[j-1] = '1';
		}
		rem[keylen-1] = input[i+keylen];
		strcpy(temp,rem);
	}
	strcpy(rem,temp);
	printf("\nQuotient is ");
	for (i=0;i<msglen;i++)
	 printf("%c",quot[i]);
	printf("\nCRC is ");
	for (i=0;i<keylen-1;i++)
	 printf("%c",rem[i]);
	printf("\nFinal data is: ");
	for(i=0;i<msglen;i++)
		fdata[i] = input[i];
	fdata[i] = '\0';
	strcat(fdata,rem);
	puts(fdata);
}
int main()
{
	
	char input[100], key[30];
	printf("Enter Data: ");
	gets(input);
	printf("Enter Key: ");
	gets(key);
	sender(input,key);	
	
	return 0;
}
