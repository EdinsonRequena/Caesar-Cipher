/*

Caeser Cipher.

"Caesar's code, is one of the simplest and most widely known encryption techniques. 
It is a type of substitution cipher in which each letter in the plaintext is 
replaced by a letter some fixed number of positions down the alphabet." - Wikipedia.

Github: edinsonrequena
Twitter: requenaea
Medium: edinsonrequena
Email: edinsonrequena@protonmail.com
Instagram: edinsonrequena

*/

#include<stdio.h>
#include<string.h>
#include<stdlib.h>

void cipher(char* text, int key);

int main(void){
	
	int key = 3;
	char text[101];
	
	printf("Type your text: ");
	fgets(text, sizeof(text), stdin);
	
	printf("The ciphered text is : ");
	
    cipher(text, key);
	
}

void cipher(char* text, int key){
	
	int i=0;
	int cypherValue;
	char cypher;
	
	while( text[i] != '\0' && strlen(text)-3 > i){
		cypherValue = ((int)text[i] -97 + key) % 26 + 97;
		cypher = (char)(cypherValue);
		
		printf("%c", cypher);
		i++;
	}
	printf("\n");
}