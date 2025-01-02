#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

// Defined Keywords
#define W "Western" 
#define C "Chinese"
#define M "Malay"
#define F "Fusion"
#define I "Indian"
#define T "Thai"

// Function Calling
void foodSelection();

int main() {

	bool choice = true;
	double w = 20.00, ch = 40.00, m = 15.55, f = 35.40, i = 10.35, t = 30.00;

	printf("Types of Restaurant Options Available!\n"); // Restaurant Selection
	printf("--------------------------------------\n");

	printf("Western Chinese Malay \nFusion  Indian  Thai\n\n");

	do {
		printf("Enter restaurant type (eg: W for Western) : ");
		scanf(" %c", &choice);
		printf("\n");

		if (choice == 'W' || choice == 'w') {
			printf("You have selected the %s option\n\n", W);

			printf("Western Cuisine Menu\n");
			printf("-----------------------\n");

			printf("BBQ Bourbon Burger - RM 12.99\n");
			printf("Truffle Mac and Cheese - RM 11.50\n");
			printf("Garlic Herb Ribeye Steak - RM 22.99\n\n");
			foodSelection();
		}

		else if (choice == 'C' || choice == 'c') {
			printf("You have selected the %s option\n\n", C);

			printf("Chinese Cuisine Menu\n");
			printf("-----------------------\n");

			printf("Kung Pao Wontons - RM 8.99\n");
			printf("Sweet and Sour Pineapple Chicken - RM 10.50\n");
			printf("Szechuan Spicy Noodles - RM 9.25\n\n");
			foodSelection();
		}

		else if (choice == 'M' || choice == 'm') {
			printf("You have selected the %s option\n\n", M);

			printf("Malay Cuisine Menu\n");
			printf("-----------------------\n");

			printf("Nasi Lemak Royale - RM 9.50\n");
			printf("Satay Chicken Skewers - RM 7.99\n");
			printf("Rendang Ayam with Rice - RM 12.00\n\n");
			foodSelection();
		}

		else if (choice == 'F' || choice == 'f') {
			printf("You have selected the %s option\n\n", F);

			printf("Fusion Cuisine Menu\n");
			printf("-----------------------\n");

			printf("Sushi Pizza - RM 14.99\n");
			printf("Kimchi Quesadilla - RM 11.75\n");
			printf("Mango Tango Salad - RM 9.00\n\n");
			foodSelection();
		}

		else if (choice == 'I' || choice == 'i') {
			printf("You have selected the %s option\n\n", I);

			printf("Indian Cuisine Menu\n");
			printf("-----------------------\n");

			printf("Butter Chicken Tacos - RM 10.50\n");
			printf("Paneer Tikka Pizza - RM 11.25\n");
			printf("Biryani Burrito - RM 9.75\n\n");
			foodSelection();
		}

		else if (choice == 'T' || choice == 't') {
			printf("You have selected the %s option\n\n", T);

			printf("Thai Cuisine Menu\n");
			printf("-----------------------\n");

			printf("Pad Thai Spring Rolls - RM 7.75\n");
			printf("Green Curry Fried Rice - RM 9.50\n");
			printf("Tom Yum Soup with Shrimp - RM 8.25\n\n");
			foodSelection();
		}

		else {
			printf("You have selected and incorrect option! Try Again!\n\n");
			choice = false;
		}

	} while (!choice);

	system("pause");
}

void foodSelection() {
	char select;
	char name[25];
	int amount = 0;

	printf("Do you wish to proceed with the booking? (Y/N): "); // User Booking
	scanf(" %c", &select);
	printf("\n");

	if (select == 'Y' || select == 'y') {

		printf("Booking Information\n");
		printf("-------------------\n");

		printf("Your First Name: ");
		scanf(" %s", &name);

		printf("People Count: ");
		scanf(" %d", &amount);

		printf("\n");

		printf("Your Booking has been successfully recorded!! Thank you for your patience!\n\n");

		printf("Booking Details\n");
		printf("---------------\n");

		printf("Name: %s\n", name);
		printf("Number of people: %d\n\n", amount);

		printf("We await your arrival at our cuisine!!\n\n");
	}

	else {
		printf("Thank you for using our service!!\n\n");
	}
}