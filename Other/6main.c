/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgould <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/31 08:34:58 by mgould            #+#    #+#             */
/*   Updated: 2016/11/01 08:23:39 by mgould           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>
#include "../ex06/ft_strcmp.c"

int main(void)
{
	char haystack110[] = 	"";
	char needle10[] = 	"";

	printf("both null\n");
	printf("%s\n%s\n\n", haystack110, needle10);
	printf("strcmp:\n%d\n", strcmp(haystack110, needle10));


	if (strcmp(haystack110, needle10) == 0)
	{
		printf("The strings are equal\n");
	}
	printf("ft_strcmp:\n%d\n", ft_strcmp(haystack110, needle10));

	char haystack11[] = 	"abc";
	char needle1[] = 	"abc";

	printf("\nequal\n");
	printf("%s\n%s\n\n", haystack11, needle1);
	printf("strcmp:\n%d\n", strcmp(haystack11, needle1));


	if (strcmp(haystack11, needle1) == 0)
	{
		printf("The strings are equal\n");
	}
	printf("ft_strcmp:\n%d\n", ft_strcmp(haystack11, needle1));

	char haystack1[] = 	"abcd";
	char needle[] = 	"abc";

	printf("\n1 is greater than 2\n");
	printf("%s\n%s\n\n", haystack1, needle);
	printf("strcmp:\n%d\n", strcmp(haystack1, needle));


	if (strcmp(haystack1, needle) == 0)
	{
		printf("The strings are equal\n");
	}
	printf("ft_strcmp:\n%d\n", ft_strcmp(haystack1, needle));

	char haystack[] = 	"abc";
	char needle2[] = 	"abcd";

	printf("\n2 is greater than 1\n");
	printf("%s\n%s\n\n", haystack, needle2);
	printf("strcmp:\n%d\n", strcmp(haystack, needle2));


	if (strcmp(haystack, needle2) == 0)
	{
		printf("The strings are equal\n");
	}
	printf("ft_strcmp:\n%d\n", ft_strcmp(haystack, needle2));	
}
