#include<stdio.h>
int main(){
	//	pattern 3
		//	***    
		//	 **
		//    * 
		//	r=rows,sp=space,p=pattern,value=1,rows=userinput,c=column
	int rows;
	printf("Enter the number of rows : ");
	scanf("%d",&rows);
	for(int r=1;r<=rows;r++){
		for(int c=1;c<=rows;c++){
			if(c>=r)
			printf("*");
			else 
			printf(" ");
		}
		printf("\n");
	}
	return 0;
}