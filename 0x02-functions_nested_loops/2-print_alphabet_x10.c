#include "main.h"
void print_alphabet_x10(void){
	int v;
	int n = 0;
	while(v < 10)
	{
		v='a';
		while(v <= 'z')
		{
			_putchar(v);
			l += 1;
		}
		_putchar(10);
		n+ =1;
	}
}
