#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;

// Макрос, який повертає -1 якщо число від'ємне, 0 - якщо нульове, 1 - якщо додатнє
#define SIGN(x) (((x)<0)? "negative" :(((x)==0) ? "zero" : "positive"))
#define EVEN_ODD(x) ((((x) % 2) == 0) ? "even" : "odd" )

#define PRINTI(w) puts("control output"); \
printf(#w"=%d\n",w)

#define PRINTR(w) puts("rezult:"); \
printf ("%s\n", w)


void main()
{
	int x;
	puts("Input integer number");
	scanf("%d", &x);// введення числа
	PRINTI(x);
#ifdef SIGN
	puts("\n\nCheck sign before number ");
	PRINTR(SIGN(x));
#endif
#ifdef EVEN_ODD
	puts("\n\nCheck number even or odd");
	PRINTR(EVEN_ODD(x));
#endif
}