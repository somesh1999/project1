#include<stdio.h>
void main(){
int ar[10][10],r,c,i,j,row,column;
int newarr[10][10];
int finalarray[10][10];
int temp;
int t;
printf("Enter the rows of the array");
scanf("%d",&r);
printf("Enter the column of the array");
scanf("%d",&c);
printf("Enter the array elements");
for(i=0;i<r;i++){
	for(j=0;j<c;j++){
		scanf("%d",&ar[i][j]);
	}
	printf("\n");
}
printf("Original array is:\n");
for(i=0;i<r;i++){
	for(j=0;j<c;j++){
		printf("%d \t",ar[i][j]);
	}
	printf("\n");
}
//Transposeof the matrix
for(i=0;i<r;i++){
	for(j=0;j<c;j++){
		if(j>c-1){
		newarr[j+1][i]=ar[i][j+1];
		}
		else
		newarr[j][i]=ar[i][j];
			
	}
	
}
t=r;
r=c;
c=t;

for(i=0;i<r;i++){
	temp=c-1;
	for(j=0;j<c;j++){
		finalarray[i][j]=newarr[i][temp];
		temp--;					
	}
}

printf("Rotated array is: \n");
for(i=0;i<r;i++){
	for(j=0;j<c;j++){
		printf("%d \t",finalarray[i][j]);
	}
	printf("\n");
}


}

