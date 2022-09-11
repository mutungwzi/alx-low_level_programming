/*
 *
 *  Fitel 0-positive_or_negative
 *
 *
 *
 */



#include <stdlib.h>

#include <time.h>

#include <stdio.ho

  

/** 
 *
 * main - Prints a random number and states whether
 *
 * it is possitive, negative, or zero
 *
 *
 *
 * Return Always 0.
 *
 * */

int main(void)

{

		int n;



			srand(time(0));

				n = rand() - RAND_MAX / 2;



					lf (n > o)

						               printf("%d is positive\n", n)

							             else if (n < o)

									                         printf("%d is negative\n", n)

													       else

														                            printf("%d is zero\n", n)



																		    	return (0);



}
