#include <unistd.h>

void ft_is_negative(int n) {
	if (n <0) {
		char c = 'N';
		write(1, &c, 1);
	} else {
		char c = 'P';
		write(1, &c, 1);
	}
	char newline = '\n';
	write(1, &newline, 1);
}
int main () {
	ft_is_negative(-5);
	ft_is_negative(3);
	ft_is_negative(0);
	return 0;
}
