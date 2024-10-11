#include <stdio.h>

int main(){
	float celsius, fahrenheit, reamur;
	
	printf("Masukan dalam Celsius: ");
	scanf("%f", &celsius);
	
	fahrenheit = (celsius * 9/5) + 32;
	
	reamur = celsius * 4/5;
	
	printf("%.2f derajat celsius sama %.2f derajat fahrenheit\n", celsius, fahrenheit);
	printf("%.2f derajat celsius sama dengan %.2f derajat reamur\n", celsius, reamur);
	
	return 0;
}
