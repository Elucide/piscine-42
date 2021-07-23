/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_dico.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yschecro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/17 16:18:55 by yschecro          #+#    #+#             */
/*   Updated: 2021/07/17 19:17:47 by yschecro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <fcntl.h>
#include <stdio.h>
int main(int argc, char **argv)
{
	int i  = 0;
	char *arb = "./test.txt";


	i = open(arb, S_IRGRP | S_IRUSR);
	printf("%d\n",i);
}


//read(arg, var, bytes);
