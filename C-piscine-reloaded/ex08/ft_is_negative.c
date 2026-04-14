/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sehurtad <sehurtad@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/14 13:21:24 by sehurtad          #+#    #+#             */
/*   Updated: 2026/04/14 17:03:09 by sehurtad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_is_negative(int n)
{
	if (n >= 0)
		write(1, "P", 1);
	else
		write(1, "N", 1);
}
/*
int main()
{
    ft_is_negative(-3);
    write(1,"\n",1);
    ft_is_negative(4);
}
*/
