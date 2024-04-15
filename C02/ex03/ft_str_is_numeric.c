/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chomobon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/20 12:10:08 by chomobon          #+#    #+#             */
/*   Updated: 2023/07/20 15:01:26 by chomobon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_numeric(char *str)
{
	int	x;

	x = 0;
	while (str[x] != '\0')
	{
		if (str[x] >= '0' && str[x] <= '9')
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

/*int	main(void)
{
	char *c = "";
	printf("%d\n", ft_str_is_numeric(c));
}*/
