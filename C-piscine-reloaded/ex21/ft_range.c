/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sehurtad <sehurtad@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/14 16:26:46 by sehurtad          #+#    #+#             */
/*   Updated: 2026/04/14 17:27:39 by sehurtad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	size;
	int	*res;
	int	i;

	i = 0;
	size = max - min - 1;
	if (max <= min)
		return (0);
	res = (int *)malloc(size * sizeof(int));
	while (min < max)
	{
		res [i] = min;
		min++;
		i++;
	}
	return (res);
}
/*
#include <stdio.h>
int main()
{
    int min = 2;
    int max = 7;
    int i;
    int *tab = ft_range(min, max);
    
    i = 0;
    while (i < (max - min))
    {
        printf("%d ", tab[i]);
        i++;
    }
}
*/
