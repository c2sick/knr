#include <stdio.h>

/* Exercise 1-1. Run the "hello, world" program on your system. Experiment with leaving out
 * parts of the program, to see what error messages you get.
 */

main() // all programs require a function named "main"
{ // lets display some information in the way of text.
	printf("hello, world\n"); //theres a function named "printf" for displaying all types of information.
} // this program will display the text within the quotes, expect for the escape sequence character.


/*
 * follow whats below. 
 */

/* comment this line: #include <stdio.h>*/
/* error msg: 1-1.c:9:2: warning: incompatible implicit declaration of built-in function ‘printf’ [enabled by default]*/
/* explanation: c programs require the compiler to recognize the standard input/oupt library which printf is a part of*/
/* comment this line: main()*/
/* error msg: 1-1.c:8:1: error: expected identifier or ‘(’ before ‘{’ token*/
/* explanation: here we have no function so our routine(s) cannot be read, in this case we have only one function so logically it must be called "main"*/
/* comment this line: {*/
/* error msg: 1-1.c:9:2: error: expected declaration specifiers before ‘printf’
 * 1-1.c:10:1: error: expected declaration specifiers before ‘}’ token
*/
/* explanation: must declare the start of a functions body with an opening brace "{"*/
/* comment this line: printf("hello, world\n");*/
/* error msg: none*/
/* explanation: this is simple, the body of our only function is empty, or no routines whatsoever, compiles normally, but terminates normally*/
/* comment this line: "}"*/
/* error msg: 1-1.c:9:2: error: expected declaration or statement at end of input*/
/* explanation: just like the opening brace of the body we need to close it, simple...programming is "detailed oriented*/
