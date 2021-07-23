/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   learn_split.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yschecro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/19 22:15:38 by yschecro          #+#    #+#             */
/*   Updated: 2021/07/19 22:15:41 by yschecro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int test_charset(char c, char *charset)
{
	int	i;
	i = 0;

	while (charset[i])
	{
		if (charset[i] == c)
			return (1);
		i++;
	}
	return (0);
}

int main(void)
{
	char str[] = "abcdeeghijkemnoeqrstuewxyz";
	char charset[] = "f";
	printf("%d", test_charset(charset[0], str));
	return(0);
}
