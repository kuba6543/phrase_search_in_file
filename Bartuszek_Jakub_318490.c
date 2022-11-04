#include <stdio.h>
#include <string.h>

void read_variables(char path[255],char string[255])
{
	printf("Insert path to your file:\n");
	scanf("%s",path);
	printf("Insert searched string:\n");
	scanf("%s",string);
}

void look_for_variables(char path[255],char string[255])
{

}

void main()
{
	char searched_string[255] = "";
	char path_to_file[255] = "";
	int quantity = 0;
	read_variables(path_to_file, searched_string);
	look_for_variables(path_to_file, searched_string);


}
