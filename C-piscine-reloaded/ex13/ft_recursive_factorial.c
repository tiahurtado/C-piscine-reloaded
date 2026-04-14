/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sehurtad <sehurtad@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/14 14:00:39 by sehurtad          #+#    #+#             */
/*   Updated: 2026/04/14 17:13:03 by sehurtad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_recursive_factorial(int nbr)
{
	if (nbr > 1)
		nbr = nbr * ft_recursive_factorial(nbr - 1);
	return (nbr);
}
/*
int main()
{
    printf("%d",ft_recursive_factorial(5));
}
*/
