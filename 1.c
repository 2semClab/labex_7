#include<stdio.h>
#include<math.h>
int main(){
int x,n;
printf("Enter the value of x and n : ");
scanf("%d%d",&x,&n);
int num = pow(x,n);
int f=1;
for (int i=n;i>=1;i--){
	f=f*i;
	}
int result1 = num/f;
int result2 = num%f;
printf("%d to the power %d divided by %d! = %d.%d\n",x,n,n,result1,result2);

return 0;
}
