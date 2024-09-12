#include <stdio.h>
#include <string.h>
	
	int main() {
	    char name[100];
	    int age;
	
	    printf("Enter your name: ");
	    scanf("%99s", name);
	    
	    printf("Enter your age: ");
	    scanf("%d", &age);
	
	    printf("Name: %s\n", name);
	    printf("Age: %d\n", age);
	    
	    if ( age >= 18) {
	    	
	    	printf("You are elligible for licence");
		} else {
			
			printf("You are not elligible");
		}
	
	    return 0;
	}
	
	