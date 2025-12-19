Simple Unix Shell

This project implements a basic Unix shell in C, capable of executing common Linux commands such as ls, cd, pwd, and more.
The shell demonstrates fundamental concepts of operating systems and process management, including process creation, execution, and termination.

Features
Executes standard Linux commands using fork() and exec() system calls.
Supports simple command parsing with arguments.
Handles multiple commands sequentially.
Basic error handling for invalid commands.


How it Works
The shell reads user input from the terminal.
Input is parsed into the command and its arguments.
A child process is created using fork().
The child process executes the command using execvp(), while the parent process waits for it to complete.
The shell repeats this cycle until the user exits.

Learning Outcomes
Understanding of process creation and management in Unix/Linux.
Practical experience with fork(), exec(), and system calls.
Implementation of basic command parsing and input handling.
Familiarity with building a minimal shell environment.
