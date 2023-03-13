/* https://github.com/sohitfirs/6.3.git */

#include <stdio.h>
#include <string.h>
#include <cstdlib>

main()
{
	char str[100];
	gets(str);
	
	printf("2 sym = %c\n", str[1]);
	
	printf("last sym = %c\n", str[strlen(str)-1]);
	
	int a, b;
	char buf;
	printf("sym 1 = ");
	scanf("%i", &a);
	printf("sym 2 = ");
	scanf("%i", &b);
	
	buf=str[a-1];
	str[a-1]=str[b-1];
	str[b-1]=buf;
	
	puts(str);
	
	int j;
	printf("del sym = ");
	scanf("%i", &j);
	
	for(int i=j-1; i<strlen(str); i++)
	{
		str[i]=str[i+1];
	}
	
	puts(str);
	
	system("pause");
}
