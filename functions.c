#include <stdio.h>
#include "recap_problems.h"

void Mul_arr(int *p, int* t, int size) {
		printf("the result is.\n");
		for(int i = 0; i < size; ++i) {
				printf("%d ", p[i] * t[i]);
		}
		printf("\n");
}

void scan_arr(int *p, int size) {
		for(int i = 0; i < size; ++i) {
				printf("%d-th element. ", i);
				scanf("%d", p + i);
		}
}

int arithmetic_mean(int* p, int size) {
		int res = 0;
		for(int i = 0; i < size; ++i) {
				res += p[i];
		}
		return (int) res / size;
}

void Find_target(int *p, int size, int target) {

		for(int i = 0; i < size; ++i) {
			if (target == p[i])	{
					printf("Yes\n");
					return;
			}
		}
		printf("No\n");
}

void Char_nums(char *s) {
		printf("Numbers are.\n");
		while(*s != '\n' && *s != '\0') {
				if(*s > '0' && *s < '9') {
						printf("%c ", *s);
				}
				++s;
		}
}

void Upper_str(char *s) {
		while(*s != '\n' && *s != '\0') {
				*s = (*s & 32 && *s != ' ') ? *s ^ 32 : *s;
				++s;
		}
}

int cmp_arr(int *p1, int *p2, int size) {
		for(int i = 0; i < size; ++i) {
				if (p1[i] != p2[i]) return 1;
		}
		return 0;
}

void print_arrays(int *t, int *w, int size) {
		int count = size - 1;

		for(int i = 0; i < size * 2; ++i) {
			if (i < size) {
					printf("%d ", t[i]);
			} else {
					printf("%d ", w[i - size]);
			}
		}
}

void print_reverse_arrays(int *f, int fSize, int *s, int sSize) {
		for(int i = fSize + sSize - 1; i >= 0; --i) {
				if(i >= sSize ) {
						printf("%d ", f[i - sSize]);
				} else {
						printf("%d ", s[i]);
				}
		}
}

float Fahrenhite_to_Celsius(float f) {
		return (f - 32) * 5 / 9;
}

int Fibonacci(int n) {
		if(n < 2) return n;
		
		int a = 0;
		int b = 1;
		int c = a + b;

		for(int i = 2; i < n; ++i) {
			a = b;
			b = c;
			c = a + b;
		}
		return c;
}

void number_multiplication_table(int n) {
		for(int i = 0; i < 10; ++i) {
				printf("	%d * %d = %d\n", n, i + 1, n * (i + 1));
		}
		printf("\n");
}

void multiplication_table() {
		for(int i = 0; i < 10; ++i) {
			printf("  %d", i + 1);
			for(int j = 0; j < 10; ++j) {
					printf("	%d * %d = %d\n", i + 1, j + 1, (i + 1) * (j + 1));
			}
			printf("\n");
		}

}

int Fuctory(int n) {
		long res = n;
		for(int i = 1; i < n; ++i) {
				res *= i;
		}
		return res;
}

int sum_of_digit(int n) {
		int sign = (n < 0) ? -1 : 1;
		n *= sign;
		int sum = 0;

		while(n) {
			sum += n % 10;
			n /= 10;
		}
		return sign * sum;
}

float power(int n, int exp) {
	int sign = (exp < 0) ? -1 : 1;		
	exp *= sign;
	float pow = 1;
	for(int i = 0; i < exp; ++i) {
			pow *= n;
	}
	
	if(sign < 0) return 1 / pow;
	return pow;
}

void Reverse_char_arr(char *s) {
	char *str = s;
	char *end = s;
	while(*end != '\n' && *end != '\0') {
			++end;
	}
	--end;

	while(str < end) {
			char temp = *str;
			*str = *end;
			*end = temp;
			++str;
			--end;
	}
}

int polindrom(long long int n) {
	printf("	POLINDROM\n");
		long long int m = 0;
		while(n > m) {

				m = m * 10 + n % 10;
				if((n / 10 == m) || (n == m)) return 0;
				n /= 10;
				printf("%lld, %lld\n", n, m);
		}
		
		return 1;
}

int reverse_number(long long int n) {
	printf("	REVERSE\n");
		long long int res = 0;
		while(n) {
				res = res * 10 + n % 10;
				n /= 10;
		}
		printf("res = %lld\n", res);
		return res;
}

int reverse_and_add(long long int n) {
		int count = 0;
		if(n < 0 || (n % 10 == 0 && n != 0)) return -1;

		while(polindrom(n)) {
			n += reverse_number(n);	
			++count;
		}

		return count;
}
