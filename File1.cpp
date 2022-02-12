#include <iostream>

int i;
int j;
int k;

int main() {
	for (i = 1; i <= 9; i++) {
		for (j = 1; j <= 9; j++) {
			k = i * j;
			std::cout << i << " * " << j << " = " << k << std::endl;
		}
	}
}