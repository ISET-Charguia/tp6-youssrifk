/*
 ============================================================================
 Name        : ex6.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include<string.h>

void main() {
	int n, m, x, z, nb, i, j, y;
	char ch[50];
	do {
		printf("donner n :");
		scanf("%d", &n);
	} while (n % 2 == 0);
	m = 3 * n;
	printf("donenr un  chaine");
	scanf("%s", ch);
	z = 3;
	x = (m - z) / 2;

	nb = 0;
	y = 0;
	while (nb < n) {
		if (y == 0) {
			if (x >= 3) {

				for (i = 1; i <= x; i++)
					printf("-");
				j = 0;

				while (j != z) {
					printf(".|.");
					j += 3;
				}

				for (i = 1; i <= x; i++)
					printf("-");
				printf("\n");
				x = x - 3;
				z = z + 6;
				nb++;
			} else {
				for (i = 1; i <= (m - strlen(ch)) / 2; i++)
					printf("-");
				printf("%s", ch);
				for (i = 1; i <= (m - strlen(ch)) / 2; i++)
					printf("-");
				printf("\n");
				nb++;
				y++;
				x = 3;
				z=z-6;
			}

		} else {

			for (i = 1; i <= x; i++)
				printf("-");

			j = 0;

			while (j < z) {
				printf(".");
				j++;
				printf("|");
				j++;
				printf(".");
				j++;
			}
			for (i = 1; i <= x; i++)
				printf("-");
			x = x + 3;
			z = z - 6;
			printf("\n");
			nb++;
		}
	}

}
