#include<stdio.h>
#include<string.h>
int main()
{
	char mosi[40][10] = {".-", "-...", "-.-.", "-..", ".", "..-.", "--.", "....", "..", ".---", "-.-", ".-..", "--", "-.", "---",".--.","--.-" ,".-.", "...", "-", "..-", "...-", ".--", "-..-", "-.--", "--..", ".----", "..---", "...--", "....-", ".....", "-....", "--...", "---..", "----.", "-----"};
	char input[120];
	int length, i;
	while(scanf("%s", input) != EOF)
	{
		length = strlen(input);
		for(i=0; i<length-1; i++)
		{
			if(input[i] >= '0' && input[i] <= '9')
				printf("%s===", mosi[input[i] - '0' + 26]);
			else
				printf("%s===", mosi[input[i] - 'A']);
		}
		if(input[i] >= '0' && input[i] <= '9')
				printf("%s\n", mosi[input[i] - '0' + 26]);
		else
			printf("%s\n", mosi[input[i] - 'A']);
	}
	return 0;
} 
