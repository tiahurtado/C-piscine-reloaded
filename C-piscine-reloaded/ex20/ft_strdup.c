/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sehurtad <sehurtad@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/14 16:16:30 by sehurtad          #+#    #+#             */
/*   Updated: 2026/04/14 17:28:07 by sehurtad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strdup(char *src)
{
	char	*copy;
	int		i;

	i = 0;
	copy = (char *)malloc(ft_strlen(src) * sizeof(char));
	while (src[i])
	{
		copy[i] = src[i];
		i++;
	}
	return (copy);
}
/*
int main()
{
    char *plus = ft_strdup("42Barcelona");

    printf("%s", plus);
}
*/
