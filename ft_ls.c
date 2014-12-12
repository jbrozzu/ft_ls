/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ls.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbrozzu <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/12/08 18:17:43 by jbrozzu           #+#    #+#             */
/*   Updated: 2014/12/08 19:16:48 by jbrozzu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ls.h"

int     ft_ls_no_arg(void)
{
	DIR             *dirp;
	struct dirent   *dir_name;
	char            *dir_path;

	dir_path = ".";
	if ((dirp = opendir(dir_path)) == NULL)
		ft_perror(0, '\0', dir_path);
	while ((dir_name = readdir(dirp)))
	{
		if (dir_name->d_name[0] != '.')
		{
			ft_putstr(dir_name->d_name);
			ft_putchar('\n');
		}
	}
	closedir(dirp);
	return (0);
}
