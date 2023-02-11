#include<stdio.h>

main(){
	
	int i,n, sum=0;
	
	printf("enter size :  ");
	scanf("%d",&n);
	
	int age [n];
	
	for(i=0 ; i<n ; i++){
		
		printf("value of [%d] : ",i);
		scanf("%d",&age[i]);
		
	}	
	for(i=0 ; i<n ; i++){
		
		sum = sum + age[i];
		
	}

 	;
 	 
    printf("sum = %d", sum);
    

	 }
	
	
	
	

