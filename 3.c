#include<stdio.h>
int main(){
int n;
printf("Enter a number : ");
scanf("%d",&n);
printf("Series : ");
int i =0;
while (i<n){
	printf("%d, ",i);
	i=i*2+1;
}
printf("\n",);
return 0;
}
