#include <stdio.h>
#include <stdlib.h>

int  main()
{
	char buffer[102]={0};
	char buf[4]={'-' , '\\' ,'|' ,'/'};
	int i=0;

	while(i<=100)
	{
		buffer[i]='#';
		printf("[%c][%-100s][%d\%]\r",buf[i%4],buffer,i);
		++i;
		buffer[i]='\0';
		fflush(stdout);
		usleep(60000);
	}
	printf("\n");
	return 0;
}
