#include <stdio.h>
#include <stdlib.h>

int main(void) {

	char question[] = "Enter a number: ";

	char fmt[] = "%d";
	int num = 0;

	char msg[] = "The number you entered is: %d\n";

	char odd[] = "You entered an odd number";

	char even[] = "You entered an even number";

	_asm {
		
		lea eax, question
		push eax
		call printf
		add esp, 4

		lea eax, num
		push eax
		lea eax, fmt
		push eax
		call scanf
		add esp, 8

		push num
		lea eax, msg
		push eax
		call printf
		add esp, 8


	}
	return 0;
}