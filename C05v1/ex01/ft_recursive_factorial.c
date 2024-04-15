/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chomobon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/26 18:16:44 by chomobon          #+#    #+#             */
/*   Updated: 2023/07/26 18:18:40 by chomobon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_recursive_factorial(int nb)
{
	if (nb == 1 || nb == 0)
		return (1);
	if (nb < 0)
		return (0);
	else
		return (nb * ft_recursive_factorial(nb -1));
}
/*int main(void)
{
    printf("%d", ft_recursive_factorial(12));
    return(0);
}*/
