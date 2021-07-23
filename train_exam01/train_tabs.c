/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   train_tabs.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yschecro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/22 14:32:15 by yschecro          #+#    #+#             */
/*   Updated: 2021/07/22 14:41:58 by yschecro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putstr(char *str)
{
	int i = 0;

	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
}

void put_tab(char ** tab)
{
	int i = 0;

	while (tab[i])
	{
		ft_putstr(tab[i]);
		i++;
		write (1, "\n", 1);
	}
}

int main()
{
	char *str[] = {"Bonjour", "coucou", "wesh"};
	put_tab(str);
}
