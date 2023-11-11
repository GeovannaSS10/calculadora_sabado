#include <stdio.h>
#include <stdlib.h>
#include "biblioteca.h"

	void main (){

	  int num1;
	  int num2;
 	  int total;

 			  
		printf("Digite um número:");
		scanf("%d",&num1);

		printf("Digite outro número:");
		scanf("%d",&num2);

 		 somanum(num1,num2);
		
		total= soma2num(num1,num2);

		printf("A soma dos números é: %d",total);


	}
 
	
	
