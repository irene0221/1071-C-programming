#include<stdio.h>
#include<math.h> 

int main(){
int a,b,c;double x1,x2;
printf("Enter a b c:");
scanf("%d %d %d",&a,&b,&c);
if(b*b-4*a*c>=0){
x1=(-b+sqrt(b*b-4*a*c))/(a*2);
x2=(-b-sqrt(b*b-4*a*c))/(a*2);
printf("For equation 2 x^2 -3 x + 1 =0, two roots are\n");
printf("x1=%.1f\nx2=%.1f",x1,x2);
}else{
	printf("no real roots\n");
	return 0;
}
}

