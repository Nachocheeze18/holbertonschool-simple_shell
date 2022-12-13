## General Content

*What is a Shell?
*How Do I compile it?
*Essentials for a Simple Shell
*List of useful commands
*List of allowed functions and system calls for this project
*Files
*Contributing
*Author's
*License

## What is a Shell?

 The shell is the outermost layer of the operating system. Shells incorporate a programming language to control processes and files, as well as to start and control other programs.

## How do i compile it?

gcc -Wall -Werror -Wextra -pedantic -std=gnu89 *.c -o hsh

## Essentials for a Simple Shell

>Display a prompt and wait for the user to type a command. A command line always ends with a new line.

>The prompt is displayed again each time a command has been executed.
The command lines are simple, no semicolons, no pipes, no redirections or any other advanced features.

>The command lines are made only of one word. No arguments will be passed to programs.
If an executable cannot be found, print an error message and display the prompt again.
And Handle errors.

>You have to handle the “end of file” condition (Ctrl+D)

## List of useful commands

* `cat` - prints and concatenates files to the standard output
* `cp` -copies a file into another file
* `grep` - helps to search for a file in a specific pattern
* `less` - will let you go backward and forward in the files
* `ls` - will list all files and directories in current working directory
* `mv` - helps to move one file into another file
* `pwd` - given you the current working directory

## List of allowed functions and system calls for this project
 - access (man 2 access)
 - chdir (man 2 chdir)
 - close (man 2 close)
 - closedir (man 3 closedir)
 - execve (man 2 execve)
 - exit (man 3 exit)
 - _exit (man 2 _exit)
 - fflush (man 3 fflush)
 - fork (man 2 fork)
 - free (man 3 free)
 - getcwd (man 3 getcwd)
 - getline (man 3 getline)
 - isatty (man 3 isatty)
 - kill (man 2 kill)
 - malloc (man 3 malloc)
 - open (man 2 open)
 - opendir (man 3 opendir)
 - perror (man 3 perror)
 - read (man 2 read)
 - readdir (man 3 readdir)
 - signal (man 2 signal)
 - stat (__xstat) (man 2 stat)
 - lstat (__lxstat) (man 2 lstat)
 - fstat (__fxstat) (man 2 fstat)
 - strtok (man 3 strtok)
 - wait (man 2 wait)
 - waitpid (man 2 waitpid)
 - wait3 (man 2 wait3)
 - wait4 (man 2 wait4)
 - write (man 2 write)

## Files

* `README.md` : Current file, contains information about this project.
* `shell_systems.h` : Header file, contains all prototypes for funcitons used, as well as libriaries.
* `shell_system.c`: Main file that uses most functions and executes them within this file.
* `simple_shell.c`:funtion to make a loop and get the enviroment.
* `execvp.c`: This function checks for two conditions: fork() and execve()
* `cmds.c`:this file has the function to readlines
* `exit.c`:function to be able to exit the shell
* `splitline.c`:function to splitlines 

## Contributing

Pull requests are welcome. For major changes, please open an issue first
to discuss what you would like to change.
Please make sure to update tests as appropriate.

## Author's

- Dae Thomas
- Venancio Velez

License

##### MIT License
##### Copyright (c) [2022] [Dae Thomas] [Venancio Velez]
##### Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the "Software"), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:
##### The above copyright notice and this permission notice shall be included in all
copies or substantial portions of the Software.

##### THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
SOFTWARE.




