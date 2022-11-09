#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void check_file(char path[255])
{
	FILE * file = fopen(path,"r");
	if(file)
	{
		printf("File has been opened!\n");	
	}
	else
	{
		printf("Couldn't open a file, exiting...\n");
		exit(-1);
	}
}

void look_for_phrase(char path[255],char phrase[255])
{
	char temp[255] = "";
	int quantity = 0;

	FILE * file = fopen(path,"r");
    while(fscanf(file, "%s", &temp)!=EOF)
    {
		if(!strcmp(phrase, temp))
		{
			printf("Phrase \"%s\" found!\n",phrase);
			quantity++;
		}
	}
    fclose(file);
    printf("Number of phrases \"%s\" in file: %d\n", phrase, quantity);
	
}
void main(int argc, char *argv[])
{
	char searched_phrase[255] = "";
	char path_to_file[255] = "";

	if (argc!=3)
	{
		printf("Wrong input, use ./<filename> <searched_phrase> <path_to_file>");
		exit(-1);
	}

    strcpy(searched_phrase, argv[1]);
    strcpy(path_to_file, argv[2]);

	check_file(path_to_file);
	look_for_phrase(path_to_file, searched_phrase);
}