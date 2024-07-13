#include <unistd.h>

void ft_print_alphabet(void) {
	char letter = 'a';
	while (letter <= 'z' ) {
		write(1, &letter, 1);
		letter++;
	}
	char newline= '\n';    // newline ( '\n' ) is just for me.
	write(1, &newline, 1);
}
int main() {
	ft_print_alphabet();
	return 0;
}
