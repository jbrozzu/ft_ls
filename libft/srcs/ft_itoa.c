/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbrozzu <jbrozzu@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/13 12:19:01 by jbrozzu           #+#    #+#             */
/*   Updated: 2014/11/15 10:34:31 by jbrozzu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

static char	*ft_create_str(int i, int j, int n, char *str)
{
	if (n < 0)
	{
		str[j++] = '-';
		n = -n;
	}
	while (n / i > 9)
		i *= 10;
	while (i != 0)
	{
		str[j++] = (n / i) + 48;
		n %= i;
		i /= 10;
	}
	str[j] = '\0';
	return (str);
}

char		*ft_itoa(int n)
{
	int		i;
	int		j;
	char	*str;

	j = n;
	while (j /= 10)
		i++;
	str = (char *)malloc(sizeof(char) * i + 1);
	if (!str)
		return (NULL);
	str = ft_create_str(1, 0, n, str);
	return (str);
}
