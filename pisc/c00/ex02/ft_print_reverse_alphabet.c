#include <unistd.h>

void ft_print_reverse_alphabet(void) {
	char letter = 'z';
	
	while (letter >= 'a')  {
		write(1, &letter, 1);
		letter--;
	}

	char newline = '\n';
	write(1, &newline, 1);

}
int main() {
	ft_print_reverse_alphabet();
	return 0;
}

