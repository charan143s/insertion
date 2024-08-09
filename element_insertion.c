#include<stdio.h>
void insertion(int a[],int n)
{	
	int i,j,temp;
	for(i=0;i<n;i++) {
		temp = a[i];
		j = i-1;
		while(j>=0 && a[j]>temp) {
			a[j+1] = a[j];
			j--;
		}
		a[j+1] = temp;
	}
	printf("The sorted array is : ");
	for(i=0;i<n;i++) {
		printf("%d\t",a[i]);
	}
}
int main(){
 	int a[20],temp,i,j,n;
 	printf("Enter the size of an array: ");
 	scanf("%d",&n);
 	printf("Enter the elements: ");
 	for(i=0;i<n;i++) {
 		scanf("%d",&a[i]);
	 }
	 insertion(a,n);
	 
}
