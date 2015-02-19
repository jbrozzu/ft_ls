/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbrozzu <jbrozzu@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/08 13:02:24 by jbrozzu           #+#    #+#             */
/*   Updated: 2014/11/11 18:27:11 by jbrozzu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnew(size_t size)
{
	char	*str;
	size_t	i;

	i = 0;
	if (!size)
		return (NULL);
	if ((str = (char *)malloc(size)))
	{
		while (i <= size)
		{
			str[i] = '\0';
			i++;
		}
		return (str);
	}
	return (NULL);
}
