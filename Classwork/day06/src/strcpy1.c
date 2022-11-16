#include<stdio.h>
#include<string.h>

struct Employee
{
	int eID;
        int ePhone;
	char eName[30];
	char eAddr[200];
	char eGender;
};

struct Employee emp1, emp2;

int main()
{
	emp1.eID = 123;
	emp1.ePhone = 8970;
	emp1.eGender = 'F';
	strcpy(emp1.eName, "Mahi");
	strcpy(emp1.eAddr, "Samastipur Bihar");
	printf("Name: %s\n", emp1.eName);
	printf("ID: %d\n", emp1.eID);
	printf("Phone1: %d\n", emp1.ePhone);
	printf("Gender: %c\n", emp1.eGender);
	
	emp2.eID = 123;
	emp2.ePhone = 86543;
	emp2.eGender = 'F';
	strcpy(emp2.eName, "Adira");
	strcpy(emp2.eAddr, "Samastipur Bihar");
	printf("\nName: %s\n", emp2.eName);
	printf("ID: %d\n", emp2.eID);
	printf("Phone2: %d\n", emp2.ePhone);
	printf("Gender: %c\n", emp2.eGender);

	return 0;

}


