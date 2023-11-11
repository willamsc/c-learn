#include <stdio.h>
#include <windows.h> 
int main()
{  float x, y, a;
	for(float y = 1.5; y>-1.5; y -=0.1)
	{
		for(float x=-1.5; x<1.5; x +=0.05)
		{
			float a=x*x+y*y-1;
			putchar(a*a*a-x*x*y*y*y<=0.0?'*':' ');
		}
		system("color 4");
		putchar('\n');
	}
	printf("ĳĳ");
	return 0;
 } 
