/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chomobon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/19 15:04:14 by chomobon          #+#    #+#             */
/*   Updated: 2023/07/20 12:28:57 by chomobon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_alpha(char *str)
{
	int	x;

	x = 0;
	while (str[x] != '\0')
	{
		if ((str[x] >= 'a' && str[x] <= 'z')
			|| (str[x] >= 'A' && str[x] <= 'Z'))
		{
			x++;
		}
		else
		{
			return (0);
		}
	}
	return (1);
}

/*int	main (void)
{
	char a[] = "aaa";
	printf("%d\n", ft_str_is_alpha(a));
}*/
