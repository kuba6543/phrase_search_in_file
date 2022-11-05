#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void open_file(char path[255])
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
		if(!stricmp(phrase, temp))
		{
			printf("Phrase \"%s\" found!\n",phrase);
			quantity++;
		}
	}
    fclose(file);
    printf("Number of phrases \"%s\" in file: %d\n", phrase, quantity);
	
}
void main()
{
	char searched_phrase[255] = "";
	char path_to_file[255] = "";
	printf("Insert path to your file:\n");
	scanf("%s",path_to_file);
	printf("Insert searched phrase:\n");
	scanf("%s",searched_phrase);

	open_file(path_to_file);
	look_for_phrase(path_to_file, searched_phrase);
}
