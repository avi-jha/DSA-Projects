#include <stdio.h>
#include <stdlib.h>
long long int print_prn(long long int);

void main() {
	long long int prn,print;
	printf("enter prn \n");
	scanf("%lld", &prn);
	print=print_prn(prn);
	printf("%lld", print);

	return 0;
}

long long int print_prn( long long int prn){
	long long int print;
	print=prn;
	return(print);
}
