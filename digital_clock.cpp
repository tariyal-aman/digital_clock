 	#include<iostream>
#include<unistd.h>
#include<ctime>
#include<stdlib.h>
using namespace::std;
int main()
{
	time_t now=time(0);
	tm*ltm=localtime(&now);
	
	int i=ltm->tm_sec,j=ltm->tm_min,k=ltm->tm_hour;
	
	for(;;++i)
	{
		cout<<k<<":"<<j<<":"<<i;
		sleep(1);
		system("CLS");
		if(i==60)
			{
				++j;
		 		i=0;
			}
				 if(j==60)
				 	{
		 			++k;
		 			j=0;
					 }
		 		
				 
								 if(k==24)
		 						{
		 							k=0;
								 	i=0;
		 							j=0;		 
							     }
		  		
	if(i<55)
	system("color F4");
	else
	system("color C7");	
	
	
	
	}
	



}
