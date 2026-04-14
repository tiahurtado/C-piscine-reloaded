/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sehurtad <sehurtad@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/14 13:41:40 by sehurtad          #+#    #+#             */
/*   Updated: 2026/04/14 17:10:02 by sehurtad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	aux;

	aux = *b;
	*b = *a;
	*a = aux;
}
/*
int main()
{
    int a = 1;
    int b = 2;

    int *pa=&a;
    int *pb=&b;

    ft_swap(pa,pb);
    printf("%d",a);
    printf("%d",b);
}*/
