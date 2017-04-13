#include <stdio.h>
#include <stdlib.h>

int main()
{
	int i=0;
	char ch[5]={'-' , '|' , '/' , '-' , '\\'};
	char buff[102]={0};
	printf("\033[?25l"); //隐藏光标
	printf("\033[41m"); //红色背景
	printf("%106s\r",buff);
	fflush(stdout);
	printf("\033[0m");
	while(i<=100)
	{   
		printf("\033[?25l"); //隐藏光标
		printf("\033[42m\033[1m"); //绿色前景
		printf("%c %3d%%%s\r\033[0m",ch[i%5],i,buff);
		fflush(stdout);
		usleep(60000);
		buff[i]=' ';
		++i;
	}   
	printf("\n\033[?25h"); //显示光标
	printf("Complete!\n");
	return 0;
}
