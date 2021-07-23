/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inter.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yschecro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/22 21:42:37 by yschecro          #+#    #+#             */
/*   Updated: 2021/07/22 21:51:27 by yschecro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdlib.h>

void inter (char *str1,char *str2)
{
	int i = 0;
	int j = 0;
	char *out;

	while (str1[i])
	{
		while (str2[j])
		{
			if(str1[i] == str2[j])
			{
				out[i] = str1[i];
				write(1, &str1[i], 1);
			}
			j++;
		}
		i++;
	}
}
int main(void)
{
	inter("abcd", "b");
}
