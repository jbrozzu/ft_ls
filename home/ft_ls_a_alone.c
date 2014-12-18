/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ls_a_alone.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbrozzu <jbrozzu@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/12/07 16:42:26 by jbrozzu           #+#    #+#             */
/*   Updated: 2014/12/07 18:51:57 by jbrozzu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ls.h"

void		ft_ls_a_alone(void)
{
	DIR				*dirp;
	struct dirent	*dir_name;
	const char 		*dir_path;

	dir_path = ".";
	if (!(dirp = opendir(dir_path)))
		ft_perror(0, '\0', (char *)dir_path);
	while ((dir_name = readdir(dirp)))
	{
		ft_putstr(dir_name->d_name);
		ft_putchar('\n');
	}
	closedir(dirp);
}