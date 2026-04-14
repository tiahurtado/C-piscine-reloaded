/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sehurtad <sehurtad@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/14 13:51:14 by sehurtad          #+#    #+#             */
/*   Updated: 2026/04/14 17:10:21 by sehurtad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}
/*
int main()
{
    int *res1;
    int *res2;

    ft_div_mod(10,5,res1,res2);
    printf("%d",res1);
    printf("%d",res2);
}
*/
