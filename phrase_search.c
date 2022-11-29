#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define BUFFER_SIZE 255

void look_for_phrase(char path[BUFFER_SIZE],char phrase[BUFFER_SIZE])
{
	char temp[BUFFER_SIZE] = ""; 								// temporary function to store lines in file 
	int quantity = 0;									// quantity of occurences

	FILE * file = fopen(path,"r"); 						// opening file from path
	if(file) 											// checking if the file is open, file not opened will return NULL (0)
	{
		printf("File has been opened!\n");	
	}
	else
	{
		printf("Couldn't open a file, exiting...\n");
		exit(-1);										// exiting the program with error in case of not opening the file
	}
    while(fscanf(file, "%s", &temp)!=EOF)
    {
		if(!strcmp(phrase, temp))
		{
			printf("Phrase \"%s\" found!\n",phrase);
			quantity++;
		}
	}
    fclose(file);										// closing the file
    printf("Number of phrases \"%s\" in file: %d\n", phrase, quantity);
	
}
void main(int argc, char *argv[])
{
	char searched_phrase[BUFFER_SIZE] = "";
	char path_to_file[BUFFER_SIZE] = "";

	if (argc!=3)																// 2 arguments expected +  program = 3
	{
		printf("Wrong input, use ./<filename> <searched_phrase> <path_to_file>");
		exit(-1);
	}

    strncpy(searched_phrase, argv[1], BUFFER_SIZE);											// strings can't be simply copied, I am using strcpy()
    strncpy(path_to_file, argv[2], BUFFER_SIZE);

	look_for_phrase(path_to_file, searched_phrase);
}
