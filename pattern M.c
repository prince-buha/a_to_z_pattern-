/*
* *    * *
*  *  *  *
*   *    * 
*        *
*        *
*        *
*/
#include<stdio.h>

main()
{
	int i;
	for(i=1;i<=6;i++){
		if( i == 1 ){
			printf("* *   * *\n");
		}
	   	else	if( i == 2 ){
			printf("*  *  * *\n");
		}
		else if (i == 4|| i == 5 || i == 6){
			printf("*       *\n");
		}
		else {
			printf("*   *   *\n");
		}
		
		}
}

