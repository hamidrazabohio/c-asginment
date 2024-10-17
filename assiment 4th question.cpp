#include<stdio.h>
#include<conio.h>
int main(){
	float fahrenheit,calsius;
	printf("temp in fahrenheit:");
	scanf("%f",&fahrenheit);
	calsius=(fahrenheit-32)* 5/9 ;
	printf("temp in calsius is %2f",calsius);
	getch();
}
