/*
* * * * *
*
*
* * * * *
*
*
* * * * * 
*/

#include<stdio.h>

main()
{
	int i;
	for(i=1;i<=7;i++){
		if(i==2|| i==3 || i==5 || i == 6 ){
			printf("*        \n");
		}
	   	else	if(i == 4 || i == 1 || i == 7 ){
			printf("* * * * * \n");
		}
		
		}
}
