#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include "appdev.h"

int main()
{
	rock r;
	srand(time(NULL));
	printf("Application Developers Rock!\n");
	printf("Enter Rockers' name: ");
	scanf("%s", r.rname);
	r.max = rand() % 50 + 51;
	r.min = rand() % 50 + 1;
	send_data(r);
	printf("Rockin' Roll\n");
	return 0;
}