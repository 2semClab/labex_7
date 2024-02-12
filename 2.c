#include<stdio.h>
int main(){
int n;
printf("Enter a number : ");
scanf("%d",&n);
if (n==2)
	printf("%d is a prime number\n",n);
else{
for(int i=2;i<n;i++){
	if(n%i == 0){
		printf("%d is not a prime number\n",n);
		break;
	}
	else{
	printf("%d is a prime number\n",n);
	break;
	
	}
}
}

return 0;
}
