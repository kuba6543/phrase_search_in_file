# Wybrane zadanie: nr 2

## Description of programme:

Programme will search for a phrase in file and display number of occurences.

## Launching parameters:

./<filename> <searched_phrase> <path_to_file>

## Variables in programme:

* searched_phrase(string) - searched phrase
* path_to_file(string) - path to a file
* quantity(int) - quantity of occurences

## Functions in programme:

* check_file(char path[255]) - checks if the file can be opened
* look_for_phrase(char path[255],char phrase[255]) - looks for a phrase in file

## Examplary input and output: 

untitled.txt
```
abcd
abcd
sample abcd
abcd abcd


abcd
```

Bartuszek_Jakub_318490
```
gcc Bartuszek_Jakub_318490.c -o Bartuszek_Jakub_318490
./Bartuszek_Jakub_318490
Insert path to your file:
/home/mion/s/281/jbartusz/Desktop/untitled.txt
Insert searched phrase:
aBcD
File has been opened!
Phrase "aBcD" found!
Phrase "aBcD" found!
Phrase "aBcD" found!
Phrase "aBcD" found!
Phrase "aBcD" found!
Phrase "aBcD" found!
Number of phrases "aBcD" in file: 6
```
