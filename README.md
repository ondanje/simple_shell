                                                SIMPLE SHELL REPOSITORY                                                             

## DESCRIPTION

The repository named above is a repository that contains the necessary files that are required by ALX for the simple shell project. The repository contains a number of files that when executed create a simple shell program that is able to execute most commands that are found in the /bin directory .

The shell program is written in C langauge and executed as a C file.

## FUNCTIONALITY

- Program starts and waits for the user to input a command
- Any command that is misspelt or unavailable returns an error prompt
- Program can execute a number of simple shell commands with options and arguments including but not limited to ls, cd, pwd, and cat.
-  Shell terminal gives users the option to exit the program using 'exit'
- Users can use Ctrl + D to exit the shell terminal
- Shell also handles errors
- The shell terminal also handles inline arguments
- The shell terminal also has the capability of creating links

# BUILTINS

cd: Changes the current directory to the one specified
ls: Lists all the directories present, has options such as -a(long format)
pwd: Prints the current working directory
clear: clears shell
exit: exit's shell
Ctrl + L: A command for clearing the terminal
Ctrl + D: Command that exits the terminal



# Instructions
1. Compile the code by using the following command: 
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 *.c -o hsh

2. The code will create an object file that is executable

3. Run ./hsh

4. If you want to exit press exit

## Contributors
among others
<atalakidi@gmail.com>
<cyrilondanje@gmail.com>
