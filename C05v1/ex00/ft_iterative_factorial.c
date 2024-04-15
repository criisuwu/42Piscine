/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chomobon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/26 16:46:31 by chomobon          #+#    #+#             */
/*   Updated: 2023/07/26 18:20:25 by chomobon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	res;

	res = 1;
	if (nb < 0)
		return (0);
	if (nb == 0)
		return (1);
	while (nb >= 1)
	{
		res = res * nb;
		nb--;
	}
	return (res);
}
/*#include <stdio.h>
int main(void)
{
    printf("%d", ft_iterative_factorial(2));
}*/
