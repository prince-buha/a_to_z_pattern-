/*
* * * * *
    *
    *
    *
    *
* * *
 */
 
 #include<stdio.h>

main()
{
	int i;
	for(i=1;i<=6;i++){
		if(i==2|| i==3 || i==4 || i == 5 ){
			printf("    *    \n");
		}
	   	else	if( i == 1  ){
			printf("* * * * * \n");
		}
		else if ( i == 6){
			printf("* * *    ");
		}
		
		}
}
 
