#include"stdio.h"

int square_pattern();

int main()
{	
	int a,b;
	
	int square = square_pattern(a,b);	
			
return 0;
}

int square_pattern(int i,int j)
{
	for(i=0; i<5; i++)
	{
		for(j=0; j<5; j++)
		{
			if(i==0 || j==0 ||i==4 || j==4)
			{
				printf("*");
			}
			else
			{
				printf(" ");
			}
		}
		printf("\n");	
	 
	}


}	


