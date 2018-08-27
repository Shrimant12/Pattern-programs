#include"stdio.h"

int square_pattern();
int cross_pattern();
int leftTri_pattern();

int main()
{	
	int a,b;
	
	int square = square_pattern(a,b);	
	int cross = cross_pattern(a,b);		
	int leftTri = leftTri_pattern(a,b);
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

int cross_pattern(int i, int j)
{
	printf("\n");
	
	for(i=0; i<5; i++)
	{
		for(j=0; j<5; j++)
		{
			if(i==j || i+j==4 )
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

int leftTri_pattern(int i, int j)
{
	for(i=0; i<5; i++)
	{
		for(j=0; j<5; j++)
		{ 
		int n;
			if(i+j <= n-1)
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





