int main ()
{
	 //Write a program to interchange the largest 
	//and the smallest number in the array
	
	int arr[100],n,i,min ,max,pos_min,pos_max ,temp;
	
	printf("enter the number of elements:");
	scanf("%d", &n);
	printf("enter %d the elements:  ",n);
	for (i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	min = arr[0];
	max = arr[0];
	pos_max = 0;
	pos_min = 0 ;
	 
	 for(i=1;i<n;i++)
	 {
	 	if (arr[i]>max)
	 	{
	 		max= arr[i];
	 		pos_max = i;
		 }
		 if (arr[i]<min)
		 {
		 	min = arr[i];
		 	pos_min = i ; 

		 }
	 }
	 printf("\n max = %d",max);
	 printf("\n position = %d",pos_max);
	 printf("\n min = %d",min);
	 printf("\n position = %d",pos_min);
	 
	 
	 temp = arr[pos_max];
	arr[pos_max]= arr[pos_min];
	arr[pos_min] = temp ;
	printf("\n array after interchange smallest and largest number: ");
	for(i=0;i<n;i++)
	{
	
	printf(" %d",arr[i]);
}
	
return 0 ;	
	

	

}


