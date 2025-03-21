#include<stdio.h> 
#include<string.h> 
struct Customer { 
	char name[50], phoneNo[15]; 
	float usage, totalBill; 
}; 
struct Customer 
	customers[100];
    int cusCount = 0;
void addRecord() { 
	if (cusCount < 100) { 
		printf("\nEnter name: "); 
		scanf(" %[^\n]s", customers [cusCount].name); 
		printf("Enter phone number: "); 
		scanf("%s", customers [cusCount].phoneNo); 
		printf("Enter usage (in minutes): "); 
		scanf("%f", &customers [cusCount].usage); 
		customers [cusCount].totalBill = customers [cusCount].usage * 0.1; 
        cusCount++; 
		printf("\nRecord added successfully!\n"); 
	} 
	else { 
		printf("\nMaximum number of records reached!\n"); 
	} 
} 
void viewRecords() { 
	printf("\nName\tPhone Number\tUsage(min)\tTotal "
		"Bill($)\n"); 
	for (int i = 0; i < cusCount; i++) { 
		printf("%s\t%s\t%.2f\t\t%.2f\n", customers[i].name, customers[i].phoneNo, customers[i].usage, customers[i].totalBill); 
	} 
} 
void searchRecord(char phoneNo[]) { 
	printf("\nName\tPhone Number\tUsage(min)\tTotal Bill($)\n"); 
	for (int i = 0; i < cusCount; i++) { 
		if (strcmp(customers[i].phoneNo, phoneNo) == 0) { 
			printf("%s\t%s\t%.2f\t\t%.2f\n", customers[i].name, customers[i].phoneNo, customers[i].usage, customers[i].totalBill); 
			return; 
		} 
	} 
	printf("\nRecord not found!\n"); 
}
void modifyRecord(char phoneNo[]) { 
	for (int i = 0; i < cusCount; i++) { 
		if (strcmp(customers[i].phoneNo, phoneNo) == 0) { 
			printf("\nEnter new usage (in minutes) for %s: ", customers[i].name); 
			scanf("%f", &customers[i].usage); 
			customers[i].totalBill = customers[i].usage * 0.1; 
			printf("\nRecord modified successfully!\n"); 
			return; 
		} 
	} 
	printf("\nRecord not found!\n"); 
} 
void viewPayment(char phoneNo[]) { 
	for (int i = 0; i < cusCount; i++) { 
		if (strcmp(customers[i].phoneNo, phoneNo) == 0) { 
			printf( "%s\t%s\t%.2f\t\t%.2f\n", customers[i].name, customers[i].phoneNo, customers[i].usage, customers[i].totalBill); 
			return; 
		} 
	} 
	printf("\nRecord not found!\n"); 
} 
void deleteRecord(char phoneNo[]) { 
	for (int i = 0; i < cusCount; i++) { 
		if (strcmp(customers[i].phoneNo, phoneNo) == 0) { 
			for (int j = i; j < cusCount - 1; j++) { 
				customers[j] = customers[j + 1]; 
			} 
		 cusCount--; 
			printf("\nRecord deleted successfully!\n"); 
			return; 
		} 
	} 
	printf("\nRecord not found!\n"); 
} 
void displayMenu() { 
	printf("\n1. Add New Record\n"); 
	printf("2. View List of Records\n"); 
	printf("3. Search Record\n");
	printf("4. Modify Record\n"); 
	printf("5. View Payment\n"); 
	printf("6. Delete Record\n"); 
	printf("7. Exit\n"); 
} 
int main() { 
	int choice; 
	char phoneNo[15]; 
	while (1) { 
		displayMenu(); 
		printf("Enter your choice: "); 
		scanf("%d", &choice); 
		switch (choice) { 
		case 1: addRecord(); 
        break; 
		case 2: viewRecords(); 
        break; 
		case 3: printf("\nEnter phone number to search: ");
		scanf("%s", phoneNo);
		searchRecord(phoneNo);
		break;
		case 4: printf("\nEnter phone number to modify record: "); 
        scanf("%s", phoneNo); 
        modifyRecord(phoneNo); 
		break; 
		case 5: printf("\nEnter phone number to view payment: "); 
        scanf("%s", phoneNo); 
        viewPayment(phoneNo); 
		break; 
		case 6: printf("\nEnter phone number to delete record: "); 
        scanf("%s", phoneNo); 
        deleteRecord(phoneNo); 
        break; 
		case 7: return 0; 
		default: printf("\nInvalid choice! Please try again.\n"); 
		} 
	}
	return 0; 
}
