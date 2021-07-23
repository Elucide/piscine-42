/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   itoa.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yschecro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/15 22:44:34 by yschecro          #+#    #+#             */
/*   Updated: 2021/07/16 01:48:14 by yschecro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
int len_int(int nb)
{
	int len = 0;
	//mettre nb en positif
	if (nb == 0)
		return (1);
	if (nb <= 9)
		return (1);
	if (nb > 9)
		while (nb > 0)
		{
			len += 1;
			nb = nb / 10;
		}
	return (len);
}

int pwr (int nb,int power)
{
	int out;
	int i = 0;
	out = nb;
	while (i < power - 1)
	{
		out *= nb;
		i++;
	}
	return (out);
}

char *itoa(int nb)
{
	int len = len_int(nb);
	char *out;
	out = malloc(sizeof(char) * (len + 1));
	int i = len - 1;
	printf("len = %d\n",len);
	if (out == NULL)
		return (NULL);
	out[len] = 0;
	while (nb)
	{
		out[i] = nb % 10 + '0';
		printf("j'ecris %c dans la case %d\n",out[i], i); 
		nb /= 10;
		i--;
	}
	printf("%s\n", out);
	return (out);
}

int main(void)
{
	printf("%s\n", itoa(30000));
	//printf("\n");
	/*printf("%d", len_int(4000));
	printf("\n");
	printf("%d", pwr(2, 3));*/
}
