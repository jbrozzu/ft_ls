/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbrozzu <jbrozzu@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/12/07 16:42:26 by jbrozzu           #+#    #+#             */
/*   Updated: 2014/12/07 18:51:57 by jbrozzu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ls.h"

void	ft_perror(int code, char c, char *str)
{
/*	if (code == 0)
	{
		ft_puterror("ft_ls : illegal option -- ");
		ft_writerror(c);
		ft_puterror("\nusage: ./ft_ls [-la] [file ...]\n");
	}
	else if (code == 1)
		perror("ft_ls : malloc failed");
	else if (code == 2 && errno)
		perror("ft_ls : unhandled error");*/
	if (code == 0)
	{
		ft_puterror("ft_ls : ");
		ft_puterror(str);
		perror(" : open failed");
	}
	if (errno)          // variable externe permettant de connaitre le numero de l'erreur
		exit(-1);
}

void            ft_puterror(char const *s)
{
	int i;

	i = 0;
	while (s[i])
	{
		ft_writerror(s[i]);
		i++;
	}
}

void    ft_writerror(char c)
{
	write(2, &c, 1);
}

