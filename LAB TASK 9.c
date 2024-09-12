#include <stdio.h>
	
	int main() {
	    float fscMarks, ntsMarks;
	
	    printf("Enter your F.Sc marks (out of 100): ");
	    scanf("%f", &fscMarks);
	
	    printf("Enter your NTS marks (out of 100): ");
	    scanf("%f", &ntsMarks);
	
	    if (fscMarks > 70 && ntsMarks > 70) {
	       
		    printf("Oxford University: IT\n");
	    } 
		else if (fscMarks > 70 && ntsMarks > 60) {
	    
		    printf("Oxford University: Electronics\n");
	    
		} else if (fscMarks > 70 && ntsMarks > 50) {
	    
		    printf("Oxford University: Telecommunication\n");
	    
		} else if (fscMarks >= 60 && fscMarks <= 70 && ntsMarks >= 50) {
	    
		    printf("MIT: IT\n");
	    
		} else if (fscMarks >= 50 && fscMarks < 60 && ntsMarks >= 50) {
	    
		    printf("MIT: Chemical\n");
	    
		} else if (fscMarks > 40 && fscMarks < 50 && ntsMarks >= 50) {
	    
		    printf("MIT: Computer\n");
	    
		} else {
	    
		    printf("No suitable department found.\n");
	    
		}
	
	    return 0;
	}
