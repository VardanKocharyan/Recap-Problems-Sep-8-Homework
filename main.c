#include <stdio.h>
#include "recap_problems.h"
#define SIZE 5
#define SIZE1 3
#define SIZE2 6
#define SIZE_STR 101


int main(void) {
/*
	printf("	MUL ARR's\n");
	int arr1[SIZE];
	int arr2[SIZE];
	printf("Input arr1 elements:\n");
	scan_arr(arr1, SIZE);
	printf("Input arr2 elements:\n");
	scan_arr(arr2, SIZE);
	Mul_arr(arr1, arr2, SIZE);
	printf("\n");
*/

/*	
	printf("	Arithmetic mean\n");
	int arr[SIZE];
	printf("Input arr elements\n");
	scan_arr(arr, SIZE);
	printf("arithmetic mean is %d ", arithmetic_mean(arr, SIZE));
	printf("\n");
*/
	
/*	printf("	Find a target:\n");
	int nums[SIZE];
	printf("Input arr elements.\n");
	scan_arr(nums, SIZE);
	int target = 0;
	printf("Enter target. ");
	scanf("%d", &target);
	Find_target(nums, SIZE, target);
	printf("\n");
*/

/*	printf("	Print only numbers in string\n");
	char ch[SIZE_STR];
	printf("Enter the text.  ");
	fgets(ch, SIZE_STR, stdin);
	Char_nums(ch);
	printf("\n");
*/

/*	printf("	Upper string\n");
	char str[SIZE_STR];
	printf("Enter the text. ");
	fgets(str, SIZE_STR, stdin);
	Upper_str(str);
	puts(str);
	printf("\n");
*/

/*	printf("	CMP Arr\n");
	int p1[SIZE];
	printf("Enter the p1 elements.\n");
	scan_arr(p1, SIZE);
	int p2[SIZE];
	printf("Enter the p2 elements.\n");
	scan_arr(p2, SIZE);
	printf("\n	Cmp arr\n(true-0 , false-1)\nresult is %d", cmp_arr(p1, p2, SIZE));
	printf("\n");
*/

/*	printf("	Print arrays. Firs arr1 than arr2\n");
	int nums1[SIZE];
	int nums2[SIZE];
	printf("  Enter nums1 elements\n");
	scan_arr(nums1, SIZE);
	printf("\n  Enter nums2 elements\n");
	scan_arr(nums2, SIZE);
	printf("	result is:\n");
	print_arrays(nums1, nums2, SIZE);
	printf("\n");
*/

/*	printf("	Printing Arrays reverse.(size1 != size2)\n");
	int r1[SIZE1];
	printf("\n  Enter r1[%d] elements\n", SIZE1);
	scan_arr(r1, SIZE1);
	int r2[SIZE2];
	printf("\n  Enter r2[%d] elements\n", SIZE2);
	scan_arr(r2, SIZE2);
	printf("	result:\n");
	print_reverse_arrays(r1, SIZE1, r2, SIZE2);
	printf("\n");
*/

/*	printf("	Fahrenhite to Celsius.\n");
	float F = 0;
	printf("Fahrenhite = ");
	scanf("%f", &F);
	printf("	Celsius = %f\n", Fahrenhite_to_Celsius(F));
*/

/*	printf("	Fibonacci.\n");
	int n = 0;
	printf("Whitch Fibonacci index you want. Enter: ");
	scanf("%d", &n);
	printf("result: %d\n\n", Fibonacci(n));
*/

/*	printf("	number multiplication table.\n");
	int number = 0;
	printf("Enter the number(for multiplication table): ");
	scanf("%d", &number);
	number_multiplication_table(number);
	printf("\n");
*/

/*	printf("	multiplication table.\n");
	multiplication_table();
	printf("\n");
*/

/*	printf("	Factory.\n");
	int fuct_num = 0;
	do{
			printf("Enter the number(>0): ");
			scanf("%d", &fuct_num);
	}while(fuct_num < 1);
	printf("fuctory is %d\n\n", Fuctory(fuct_num));
*/

/*	printf("	Sum of number's digit.\n");
	int d = 0;
	printf("Enter the number: ");
	scanf("%d", &d);
	printf("result is %d\n", sum_of_digit(d));
*/

/*	printf("	Power.\n");
	int p = 0;
	int exp = 0;
	printf("Enter the number: ");
	scanf("%d", &p);
	printf("Enter the exp: ");
	scanf("%d", &exp);
	printf("Result is %f\n\n", power(p, exp));
*/

/*	printf("	Reverse char arr.\n");
	char boo[SIZE_STR];
	printf("Enter the text: ");
	fgets(boo, SIZE_STR, stdin);
	printf("result is : ");
	Reverse_char_arr(boo);
	puts(boo);
	printf("\n\n");
*/

	printf("	reverse-and-add.\n");
	long long olleh = 0;
	do{
		printf("Enter the number(>0): ");
		scanf("%lld", &olleh);
	}while(olleh < 0);
	printf("count = %d\n\n", reverse_and_add(olleh));

	return 0;
}
