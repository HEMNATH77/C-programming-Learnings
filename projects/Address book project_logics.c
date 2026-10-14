// ---------------------------- Mobile number --------------------------- //



  int result = 0;
	int attempt_count = 0; 

	do{
	printf("Phone: ");
	scanf("%s", addressBook->contacts[addressBook->contactCount].phone);

	result = mobile_validate(addressBook, addressBook->contactCount);

    if(result == 0){
		attempt_count++;
	}
	
    } while(result ==0 && attempt_count < 3);

	if(result == 0){
		printf(" ------------- Attempts exceeded. Try again later ----------------\n");
		return; // Exit the function without incrementing contactCount
	}


	//  ------------------------ 	Email -------------------------------------- //

	printf("Email: ");
	scanf("%s", addressBook->contacts[addressBook->contactCount].email);
	
	addressBook->contactCount++;

}

// ----------------------------------- Mobile number validation ----------------- //

int mobile_validate(AddressBook *addressBook, int contactCount){
    int length = strlen(addressBook->contacts[contactCount].phone);
	int check = 1;

    // First digit 6 - 9 check.

    if(addressBook->contacts[contactCount].phone[0] <'6' || addressBook->contacts[contactCount].phone[0] >'9') {
		printf("Invalid mobile number. The first digit must be between 6 and 9.\n");
		return 0;
	}
 
    //  Length check must be 10 digits

	if (length != 10)
    {
    printf("Invalid mobile number. Enter exactly 10 digits.\n");
    return 0;
    }

	// Check characters must be digits.

    for(int i=0;i<length;i++){
        if(addressBook->contacts[contactCount].phone[i] < '0' ||addressBook->contacts[contactCount].phone[i] >'9'){
            printf("Invalid character in mobile number. Please enter only digits.\n");
			return 0;
        }
	}

	// Unique mobile number 

	for(int i=0;i<addressBook->contactCount;i++){
		if(strcmp(addressBook->contacts[i].phone,addressBook->contacts[contactCount].phone) == 0){
			printf("Mobile number already exists. Please enter a unique mobile number.\n");
			return 0;
		}
		
	}

    return 1;
}
