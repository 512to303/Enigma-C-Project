/*
	<enigma.h> Library for Jack Danielski and Thomas Wintenburg's 
	ECEN 1310 WWII Engima Machine Project

	Authors: Jack Danielski and Thomas Wintenburg
*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>


/* 
*
*	Function Prototypes
*
*/

// Takes text from a file and uses it as the message being encrypted 
// or decrypted. 
void textEnter(); 

// Takes text from stdin/keyboard and uses it as the message being 
// encrypted or decrypted. 
void stdinEnter();

// Sets off the process to encrypt
void encrypt(); 

// Sets off the process ot decrypt
void decrypt();

// Displays Menu 1
void menuOne();

// Displays Menu 2
void menuTwo(); 

// Display help menu
void help();

//Give the rotors values
void setRotors(void);


/*
*
*	Complete functions
*
*/
void menuOne() {
	char option[2];

	printf("Choose to encrypt, decrypt, or see help menu:\n");
	printf("
		Encryption: -e\n
		Decryption: -d\n
		Help: -h\n
		Enter an option: 
		");

	scanf("%s", option);
	// Prints the option chosen as a test
	//printf("%s\n", option);

	if ( strcmp(choice,"-e") == 0 ) {
		encrypt();
	}
	else if ( strcmp(choice, "-d") == 0) {
		decrypt();
	}
	else if ( strcmp(choice,"-h") == 0) {
		help();
	}
	else {
		printf("Not a valid choice. Try again\n");
		menuOne();
	}
}


void menuTwo() {
	printf("Choose an option:\n\
		-h -> help menu and how the Enigma Machine works\n\
		-e -> encrypt a message\n\
		-d -> decrypt a message\n\
		-t -> enter text via a file from the same directory\
		 as the program\n\
		-k -> enter text from stdin/keyboard\n\
		-r -> modify rotor characters\n\
		-rs -> modify Ringstellung number/character\n\
		-p -> modify plugboard settings\n\
		");
}

void encrypt() {
	printf("Encrypt was choses\n");
	setRotors();
}

void decrypt() {
	printf("Decrypt was chosen\n");
	setRotors();
}

void help() {
	printf("HELP MENU\n\
		This program allows you to replicate the German WWII Enigma Machine\ 
		on your computer.  There are three main parts to the Enigma Machine: \ 
		the Rotors, the Ringstellung, and the Plugboard.\n\
		");

}

void setRotors(void) {
	int rotorOne, rotorTwo, rotorThree; 

	printf("Enter character for Rotor #1: ");
	sscanf("%i", rotorOne);
	if ( !(rotorOne > 64 && rotorOne < 91) ) {
		// If lowercase make uppercase
		if ( rotorOne > 96 && rotorOne < 122 ) {
			rotorOne = rotorOne - 32;
		}
		else {
			printf("Characters in your input are not accepted.\
				Look at the help menu for a list of characters\ 
				that are not accepted.\n");
		}
	}

	printf("Enter character for Rotor #2: ");
	sscanf("%i", rotorTwo);
	if ( !(rotorTwo > 64 && rotorTwo < 91) ) {
		// If lowercase make uppercase
		if ( rotorTwo > 96 && rotorTwo < 122 ) {
			rotorTwo = rotorTwo - 32;
		}
		else {
			printf("Characters in your input are not accepted.\
				Look at the help menu for a list of characters\ 
				that are not accepted.\n");
		}
	}

	printf("Enter character for Rotor #3: ");
	sscanf("%i", rotorThree);
	if ( !(rotorThree > 64 && rotorThree < 91) ) {
		// If lowercase make uppercase
		if ( rotorThree > 96 && rotorThree < 122 ) {
			rotorThree = rotorThree - 32;
		}
		else {
			printf("Characters in your input are not accepted.\
				Look at the help menu for a list of characters\ 
				that are not accepted.\n");
		}
	}

	printf("Rotors are: %i, %i, %i \n", rotorOne, rotorTwo, rotorThree);

}
