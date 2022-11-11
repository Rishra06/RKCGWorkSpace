/****************************************************************************************
 * * FILE NAME: Day10_3c.c
 * *
 * * DESCRIPTION: This file contains code which store address, extract firstname and 
 * * many more operations.
 * *
 * * DATE            NAME             REFERENCE         REASON
 * * -----------------------------------------------------------------------------------
 * * 6 OCT 2022      RASHMI KUMARI    CAPG12345         OPERATIONS ON INPUT ARRAY
 * *
 * *
 * * Copyright @ 2022 Altran Group All Rights Reserved
 * *
 * *************************************************************************************/

#include <common.h> /*Header file*/

/**************************************************************************************
 * *      MACROS
 * ***********************************************************************************/

#define MAX_LEN 80
#define ROW 4

/***************************************************************************************
 * * FUNCTION NAME: getFirstName
 * * DESCRIPTION: The function returns the firstname and lastname.  
 * *
 * *************************************************************************************/

char first[ROW][MAX_LEN]; /*declare a variable*/
char last[ROW][MAX_LEN]; /*declare a variable*/
char arr[ROW][MAX_LEN] = {"Antony: Joseph","Lata: Mary","Rajesh: Kumar", "Joly: Akbar"};

int* getFirstNames(char arr1[][MAX_LEN], int rowcount, char str1[][MAX_LEN]) /*function declaration*/

{
	for(int i = 0; i < ROW; i++) /*traversing row wise*/
	
	{
		const char s[2] = ":";
		char *token;

		token = strtok (arr1[i], s);
		strcpy(str1[i], token);
	}

	for(int i = 0; i < ROW; i++) /*traversing for each row*/
	
	{
		printf("%s\n", str1[i]);
	}

	return EXIT_SUCCESS;
}

char* getLastNames(char arr1[][MAX_LEN], int rowcount, char str2[][MAX_LEN]) /*function declaration*/

{
	char* las;
	char arr[ROW][MAX_LEN] = {"Antony: Joseph","Lata: Mary","Rajesh: Kumar","Joly: Akbar"};
	
	for(int i = 0; i<ROW; i++) /*traversing row*/
	
	{
		las = strrchr(arr[i], ':');
		printf("%s\n", ++las);
	}

	return EXIT_SUCCESS;
}

int main() /*function declaration*/

{
	int rowcount = 4;
	printf("FirstNames: \n");
	getFirstNames(arr, rowcount, first);
	printf("\n\n");
	printf("LastNames: \n");
	getLastNames(arr, rowcount, last);
	return EXIT_SUCCESS;
}
