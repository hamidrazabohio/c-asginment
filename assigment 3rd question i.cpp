#include<stdio.h>
#include<conio.h>
int main(){
	float celsius,fahrenheit;
	printf("enter temperature in celsius");
	scanf("%d",&celsius);
	fahrenheit=(celsius*9/5)+32;
	printf("temperature in fahrenheit is %f",fahrenheit);
	return 0;
}

