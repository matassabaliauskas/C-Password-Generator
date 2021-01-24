#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Enter password length here
#define passwordlength 60

int main(void){
	
	int rannum;
	int subtractor1, subtractor2;
	
	int i=0;
	int j=0;
	int select;
	char password[1000];
	srand(time(NULL));
	int integer;
	
	
	// letters from C = 65 to C = 90 (range = 25), and from C = 97 to C = 122
	
	for(j=0;j<passwordlength;j++){
		char uppercase = 90;
		char lowercase = 122;
		subtractor1 = (rand()%25);
		subtractor2 = (rand()%25);
		uppercase = uppercase - subtractor1;
		lowercase = lowercase - subtractor2;
		
		rannum = rand()%10; 		// rannum is an integer
		char numtochar = rannum + '0';	// numtochar is equal to rannum but is a character 
//        printf("uppercase is: %c, lower case is: %c, rannum is: %d, and %c\n", uppercase, lowercase, rannum, numtochar); // debugging line which shows all characters
        
        
        select = rand()%3;
        if (select == 0){
        	password[j] = lowercase;
		}
		if (select == 1){
        	password[j] = numtochar;
		}
		if (select == 2){
        	password[j] = uppercase;
		}
		
		// Alternative option program:
		/* 
		if((j%5)== 0){
			password[j] = uppercase;
		} 
		else if ((j%2) == 0){
			password[j] = lowercase;
		}
		else{
			password[j] = numtochar;
		}
		*/
	
//       printf("Password letter is: %c\n", password[j]);
	}

	printf("\n\nThe random generated password is: %s", password);
	return 0;
}
