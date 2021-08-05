/*NAME:SRUJANA AVADHANULA
PIN NUMBER:222010404027
SECTION:ECE AIML-A
QUESTION NUMBERS:3 & 8
Q3 SECONDS TO HOURS,MINUTES*/
#include <stdio.h>
int main() 
{
	int sec, h, m, s;
printf("Input seconds: ");
	scanf("%d", &sec);
	
	   h = (sec/3600); 
	   m = (sec -(3600*h))/60;
	   s = (sec -(3600*h)-(m*60));
	
printf("H:M:S - %d:%d:%d\n",h,m,s);
	
	return 0;
}