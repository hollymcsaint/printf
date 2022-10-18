i CREATING OUR OWN PRINTF FUNCTION

## collaborators

# Olayiwola Okanlawon

# Oyebode Adetunji

# The printf project is a collaboration between Ogunronbi John and Iheka Olivia, actual students of Software Engineering at Alx School, were a function named printf imitates the actual "printf" command located in the stdio.h library. It contains some of the basic features and functions found in the manual 3 of "printf".



> printf is a function that performs formatted output conversion and print data. Its prototype is the following: int printf(const char format)



> Where format contains the string that is printed. As printf() is variadic function, it can receives n arguments that replace by n tags written inside the string.



> The format tags prototype is the following:



> %[flags][length]specifier

> If the program runs successfully, the return value is the amount of chars printed.



Specifier	Output

c	Character

d or i	Signed decimal integer

s	String of characters

b	Signed binary

o	Signed octal

u	Unsigned integer

x	Unsigned hexadecimal

X	Unsigned hexadecimal (uppercase)

p	Pointer address

r	Reverse string of characters

R	ROT13 translation of string

S	String with special chars replaced by their ASCII value

%	Character

Flags	Description

+	Prints a plus sign (+) when the argument is a positive number. In other case, prints a minus sign (-).

(space)	Prints a blank space if the argument is a positive number

#	Prints 0, 0x and 0X for o, x and X specifiers, respectively. It doesn't print anything if the argument is zero

Length	Description

l	Prints a long int or unsigned long int

h	Prints a short int or unsigned short int
