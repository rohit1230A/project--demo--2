
#include <stdio.h>


int main ()
{
//WAP TO PRINT THE POSITION OF THE SMALLEST OF N NUMBERS USING ARRAY
 	int arr[100],n, i;
 	int min,pos ;
 		
 	printf("\n enter the number of element:");
 	scanf("%d" ,&n);
 	printf("\n enter  %d the elements:",n);
 	for(i=0;i<n;i++) {
	 
 	
	 
 	scanf("%d",&arr[i]);
 }
 	min = arr[0];
 	pos = 0 ; 
 	for(i=1;i<n;i++){
	 
 	if(arr[i]<min)
 	{
 		min = arr[i];
 		pos = i ;
}
}
	 printf("\n minimum = %d:", min);
	 printf("\n postion = %d:" , pos);
 
 return 0 ;
  
}

  
 	
							

							
											
												
					
					
					



	
	

