//Water bill
#include <stdio.h>
int main(){
	int units;
	float bill;
	printf("Enter the number of units consumed:");
	scanf("%d", &units);
	if(units <=30){
		bill =units *20;
	}
	else if (units <=60){
		bill = units *25;
	}
	else{
		bill = units *30;
	}
	printf("Total bill: KES %.2f\n", bill);
	return 0;
}