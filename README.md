# HSH

HSH is a simple implementation of a UNIX command interperter in C.This is a collaborative project for ALX students.

- builtins are: *exit*, *evn*, *cd*, *help*
- Handles the PATH
- Handles command lines with arguments

## Compilation / Running

Uses ` gcc -Wall -Werror -Wextra -pedantic -std=gnu89 *.c -o hsh` to compile the program, and
then ` ./hsh` to run.

## Contribution
Since it is a team project, contribution was by
1. **Amarachi Kalu Ndukwe** 
2. **Animashaun Olawunmi**
## Exernal system calls / function used
- access (man 2 access)
- chdir (man 2 chdir)
- close (man 2 close)
- closedir (man 3 closedir)
- execve (man 2 execve)
- exit (man 3 exit)
- fork (man 2 fork)
- free (man 3 free)
- getcwd (man 3 getcwd)
- getline (man 3 getline)
- getpid (man 2 getpid)
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
- write (man 2 write)
