/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sehurtad <sehurtad@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/14 14:00:39 by sehurtad          #+#    #+#             */
/*   Updated: 2026/04/14 17:14:54 by sehurtad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_factorial(int nbr)
{
	int	res;

	res = 1;
	while (nbr > 1)
	{
		res = res * nbr;
		nbr--;
	}
	return (res);
}
/*
int main()
{
    printf("%d",ft_iterative_factorial(5));
}
    */
