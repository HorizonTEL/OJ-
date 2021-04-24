#include<stdio.h>
int main()
{
	long long int time;
	long long int hour, minute, second;
	while(scanf("%lld", &time) != EOF)
	{
		time = time / 1000;
		second = time % 60;
		time /= 60;
		minute = time % 60;
		time /= 60;
		hour = time % 24;
		printf("%02lld:%02lld:%02lld\n", hour, minute, second);
	}
	return 0;
 } 
