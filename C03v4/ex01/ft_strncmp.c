/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chomobon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/24 12:13:13 by chomobon          #+#    #+#             */
/*   Updated: 2023/07/26 14:56:52 by chomobon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while ((s1[i] != '\0' || s2[i] != '\0') && i < n)
	{
		if (s1[i] > s2[i])
			return (s1[i] - s2[i]);
		else if (s1[i] < s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (0);
}

/*#include <stdio.h>
#include <string.h>
int main(void)
{
    char s1[]= "hona";
    char s2[]="hola";
    ft_strncmp(s1, s2, 2);
    printf("%d", ft_strncmp(s1, s2, 5));
    printf("\n");
    printf("%d", strncmp(s1, s2, 5));
}*/
