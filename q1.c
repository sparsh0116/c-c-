#include <stdio.h>
int main()
{
	long long n,i=0;
	scanf("%ld",&n);
	while(n>0)
	{
		if(n>=100) 
		{
			n=n-100; 
			i++;
		}
	        else if(n>=20) 
		{
			n=n-20; 
			i++;
		}
    	        else if(n>=10) 
		{
			n=n-10; 
			i++;
		}
    	        else if(n>=5) 
		{
			n=n-5; 
			i++;
		}
    	        else if(n>=1) 
		{
			n=n-1; 
			i++;
		}
    }
    printf("%ld\n",i);
	return 0;
}