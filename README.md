simple shell
Description:

What is this repo?
A Unix shell is a command-line interpreter or shell that provides a command line user interface
for Unix-like operating systems. The shell is both an interactive command language and a scripting language
and is used by the operating system to control the execution of the system using shell scripts.
How does it work?
This shell works by entering an infinite loop which is only exited under certain conditions.
Who will use this repo?
This repo mainly is created as a Holberton-school project and will mainly be used by my peers.

Release History
    • 0.0.1 - First release - 7 Apr 2020 
        ◦ More features in progress 
About

All files were created and compiled on Ubuntu 14.04.4 LTS using
GCC 4.8.4 with the following flags: -Wall -Werror -Wextra -pedantic

Instructions:

To make use of this project first clone it to your local system with the command 
"git clone <link>".
You can copy the link for cloning this project on its page in github by clicking on the field
"clone repository".
After that compile the repository by typing "gcc -Wall -Werror -Wextra -pedantic *.c" in
your terminal.

Usage

    • Once in the shell, use exactly like sh.
    The shell can run in either interactive or non-interactive mode.
Example Usage
    • This shell takes input the same as a standard unix shell.
    -interactive mode:
    After running the executable hsh, enter desired input and press return. 
    • ls -l 
    • pwd
    • echo "Hallo Freund"
    • env
    • exit
    -non-interactive mode:
    • echo "ls" | ./hsh
    • echo "ls -la /home" | ./hsh
    • echo "/bin/ls\npwd\exit" | ./hsh

How you can help:
We explicitly welcome outside contributors. It is pretty simple just send me 
your pull-request and I will approve it if it does benefit this shell.

License:

This project does not have a licence.

Authors:

Nick Arshadi <arshadi.nick@gmail.com>
Jorge Ramirez <jorge.ramirez@gmail.com>
