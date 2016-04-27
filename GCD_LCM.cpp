#include <stdio.h>

//最大公约数 
int LCM(int a, int b)
{
	int c = a%b;
	while(c != 0)
	{
		a = b;
		b = c;
		c = a%b;					
	}
	return b;				
}
//最小公倍数 
int GCD(int a, int b)
{
	return (a * b)/LCM(a, b);
}
int main()
{
	int a,b;
	printf("input two numbers:\n");
	scanf("%d %d", &a, &b);
	
	printf("LCM = %d\n", LCM(a,b));
	printf("GCD = %d", GCD(a,b)); 
	
	return 0;
}