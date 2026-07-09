# CS50x C Programs

This repository contains the C programs I am writing while taking Harvard's CS50x course.

## My Programs
### Week 1
* hello.c - The classic hello world program.
* agree.c - A simple program that checks for user input (Y/N).
* cat.c - A program designed in such a way that that cat meows to the user based on the input provided.
* compare.c - A program designed to compare the values of the input provided as greater than, less than or equal to.
* mario.c - A program made for representing 'question box' character and a brickwall.

### Week 2
* length.c -  A program that determines the length (characters) on the basis of the input provided.
* string.c - A program that prints string char by char using strlen.
* uppercase.c - A program that converts the input characters provided by the user into output of uppercase format.
* greet.c - A program that greets the user when the input is provided in the terminal window.
* status.c - A program that triggers a statement "Missing command-line argument" when the input is not provided by the user in the terminal window.
* print.c - A program that that takes a string as input and prints it character-by-character.
* reverse.c - A program  that takes a string as input,and reverses it.
* alphabetical.c - A program that prints “Yes” if a lowercase string’s characters are in alphabetical order, and “No” if they are not.
* initials.c - A program that takes a user’s full name as input, and outputs their initials.

### Week 3
* search1.c - A program that searches a particular integer from set of integers provided and gives response as "Found" or "Not found".
* search2.c - A program that searches a particular string from set of strings provided and gives response as "Found" or "Not found".
* phonebook.c - A program that that takes the input such as name and number of the following person into the code and and gives output when searched for the person's name.
* iteration.c - A program that basically makes pyramids (those like in mario.c) when an input value is given and solves the code using the methosd of iteration.
* recursion.c -  A program that basically makes pyramids (those like in mario.c) when an input value is given and solves the code using the methosd of recursion.
* struct.c - A program that gives the user the output of a candidate participated in an election by taking the input of name and number of votes as input from the user.
* struct2.c - A program that gives the user the output of a candidate participated in an election by taking the input of name and number of votes as input from the user and creating a new function named get_candidate.
* struct3.c - A program that gives the user the output of a maximum of three candidates participated in an election by taking the input of names and number of votes as input from the user and creating a new function named get_candidate.
* factorial.c - A program that uses a custom made function named factorial(int n) to give the the following number provided by the user.
* fib.c - A program that use the principle of Fibonacci series in its code by taking the input from the user and a custom function named fib(int n) is used to provide the Fibonacci number from its series.

### Week 4
* addresses.c - A program that uses the concept of pointers (*p) to locate a particular value in the computer's memory.
* addresses2.c -  A program that uses the concept of pointers (*p) to locate a particular value of characters in the computer's memory.
* addresses3.c -  A program that does not uses 'cs50.h' header file and uses the function char *s instead.
* compare_int.c - A basic program that compares the two input values provided by the user and gives the output as "Same" or "Different".
* compare_char.c - A program that uses "strcmp" function to compare the two words given as input by the user using the pointer named "char *" and gives the output as "Same" or "Different".
* compare_char2.c - A program that uses "char *" as pointers to the wordsa given as input by the user and uses "%p" pointer to locate the the character in the memory of the computer.
* copy.c - A program that copies the input provided by the user and use the pointer "char *" to allocate the other function and gives the output by changing the first letter of the word to the "uppercase" letter.
* copy2.c - A program that copies the input provided by the user and uses the function strcpy to copy the words and gives the output by changing the first letter of the word to the "uppercase" letter.
* copy3.c - A program that copies the input provided by the user and uses the function strcpy to copy the words and performs error checks using "NULL" function and gives the output by changing the first letter of the word to the "uppercase" letter.
* swap.c - A program that requires the user to provide the intial input of variable in the code and the values get swapped in the output.
* get.c - A program that uses the function "scanf" instead of applying the "get_int" function from the CS50 header file.
* get_char.c - A program that uses the function "scanf" instead of applying the "get_string" function from the CS50 header file.
* phonebook2.c - A program that uses the functions like "fopen" to open a file, "fprintf" to dispaly a particular output and "fclose" to ccose a file. This file opens the location to phonebook.csv where all the info related to user and the contact number will be stored.
* phonebook.csv - A progrsm that acts as the destination file for phonebook2.c where all the info related to user and the contact info is saved.
* cp.c - A program that uses functions like "fopen" to open a file, "fread" to read the file, "fwrite" to write/edit a file an "fclose" to close a file.
* copy.csv - A program that that creates the copy of phonebook.csv.
* concatenate.c - A program which contains a function named "concat" that takes two strings and returns a concatenated version of the two strings.
* create.c - A debugging program that creates the file given as input at the command-line. THe program will give '0'errors during debugging using the command "valgrind ./create test.c".
* pdf.c - A program that  checks whether a file, passed in as a command-line argument, is (likely) a PDF.

### Week 5
* list.c - A program that creates a list by storing the values using 'arrays' and 'malloc' function and can be extended to larger memory by 'realloc' function.
* list2.c - A program that uses a linked list to store numbers inputted by the user. It creates a linked list of nodes, each containing an integer and a pointer to the next node. The program prompts the user to enter three numbers, prepends each new number to the front of the list, and then prints the numbers in reverse order of input.
* list3.c - This program creates a linked list of three numbers entered by the user. It defines a `node` structure that contains an integer and a pointer to the next node. The program allocates memory for each new node, prompts the user for a number, and appends the new node to the end of the list. If the list is empty, it initializes the list with the first node.
* list4.c - An updated version of list3.c that uses a function to insert nodes into the list in sorted order. The function insert_node() takes a pointer to the head of the list and a number to insert, and returns a pointer to the new head of the list. The main function calls insert_node() for each number entered by the user, and then prints the sorted list. The unload() function is used to free the memory allocated for the list.
* list5.c - A simple program from 'Section' of Week 5 that creates a linked list of three integers entered by the user. It defines a `node` structure with an integer `number` and a pointer to the next node. The program prompts the user to enter three integers, allocates memory for each new node, assigns the entered number to the node, and links it to the existing list. The list is built in reverse order, with the most recently entered number at the head of the list.
* list6.c - A program that creates a linked list of integers, prints them, and then frees the memory allocated for the list.
* hash.c - A program that takes a word and returns a hash value based on the first two letters of the word. The hash value is calculated by converting the first two letters to uppercase, subtracting 'A' from each letter to get their position in the alphabet (0-25), and then combining them into a single integer value. If the input word is NULL or empty, it returns -2. If the first two characters are not alphabetic, it returns -1.












## How to run them
Compile using:
make filename

Run using:
./filename
