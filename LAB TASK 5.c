#include <stdio.h>

	int main() {
	    int customerId;
	    char name[100];
	    float units, billAmount, surcharge;
	
	    printf("Enter Customer ID: ");
	    scanf("%d", &customerId);
	
	    printf("Enter Customer Name: ");
	    scanf(" %[^\n]", name);
	
	    printf("Enter Units Consumed: ");
	    scanf("%f", &units);
	
	    if (units <= 199) {
	        billAmount = units * 16.20;
	    } else if (units >= 200 && units < 300) {
	        billAmount = units * 20.10;
	    } else if (units >= 300 && units < 500) {
	        billAmount = units * 27.10;
	    } else if (units >= 500) {
	        billAmount = units * 35.90;
	    }
	
	    if (billAmount > 18000) {
	        surcharge = billAmount * 0.15;
	        billAmount += surcharge;
	    }
	
	    printf("Customer ID: %d\n", customerId);
	    printf("Customer Name: %s\n", name);
	    printf("Total Amount to Pay: Rs. %.2f\n", billAmount);
	
	    return 0;
	}
