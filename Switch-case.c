#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	char ch;
	printf ("Nhap vao mot ky tu bat ky tu 'a' den 'z'\n");
	scanf ("%c",&ch);
	if (ch<'a' && ch>'z')
	{
		printf ("KY tu vua nhap khong phai tu 'a' den 'z'");
	}
	else
		switch (ch)
		{
			case 'a':
			case 'o':
			case 'e':
			case 'i':
			case 'u':	
				printf 	("Ky tu vua nhap la nguyen am");
				break;
			case 'z':
				printf 	("Ky tu vua nhap la ky tu 'z'");
				break;
			default:
				printf 	("Ky tu vua nhap la phu am");
				break;
				
			
		}
	
	
	
	
	
	
	
	
	
	
	
		return 0;
}
