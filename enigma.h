/*
	<enigma.h> Library for Jack Danielski and Thomas Wintenburg's 
	ECEN 1310 WWII Engima Machine Project

	Authors: Jack Danielski and Thomas Wintenburg
*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>


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



void menuOne() {
	printf("Choose to encrypt, decrypt, or see help menu:\n");

	printf("
		Encryption: -e\n
		Decryption: -d\n
		Help: -h
		");

	char choice[2];
	scanf("Choose an option: %s\n", choice);

	if (strcmp(choice,"-e")) {
		encrypt();
	}
	else if (strcmp(choice, "-d")) {
		decrypt();
	}
	else if (strcmp(choice,"-h")) {
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
}

void decrypt() {
	printf("Decrypt was chosen\n");
}

void help() {
	printf("HELP MENU\n\
		This program allows you to replicate the German WWII Enigma Machine\ 
		on your computer.  There are three main parts to the Enigma Machine: \ 
		the Rotors, the Ringstellung, and the Plugboard.\n\
		");

}
