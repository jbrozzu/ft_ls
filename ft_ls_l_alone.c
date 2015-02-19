/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ls_l_alone.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbrozzu <jbrozzu@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/12/07 16:42:26 by jbrozzu           #+#    #+#             */
/*   Updated: 2014/12/07 18:51:57 by jbrozzu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ls.h"

void		ft_ls_l_alone(void)
{
	DIR				*dirp;
	const char 		*dir_path;
	struct dirent	*dir_name;
	
	dir_path = ".";
	if (!(dirp = opendir(dir_path)))
		ft_perror(0, '\0', (char *)dir_path);
	while ((dir_name = readdir(dirp)))
	{
		if (dir_name->d_name[0] != '.')
			fonction2(dir_name);
	}
	closedir(dirp);
}

static void	file_attributes(struct stat *buf, char *file_path)
{
((S_ISREG(buf->st_mode) == 1) ? ft_putchar('-') : 1);
((S_ISDIR(buf->st_mode) == 1) ? ft_putchar('d') : 1);
((S_ISCHR(buf->st_mode) == 1) ? ft_putchar('c') : 1);
((S_ISBLK(buf->st_mode) == 1) ? ft_putchar('b') : 1);
((S_ISFIFO(buf->st_mode) == 1) ? ft_putchar('p') : 1);
((S_ISLNK(buf->st_mode) == 1) ? ft_putchar('l') : 1);
((S_ISSOCK(buf->st_mode) == 1) ? ft_putchar('s') : 1);
((buf->st_mode & S_IRUSR) ? ft_putchar('r') : ft_putchar('-'));
((buf->st_mode & S_IWUSR) ? ft_putchar('w') : ft_putchar('-'));
((buf->st_mode & S_IXUSR) ? ft_putchar('x') : ft_putchar('-'));
((buf->st_mode & S_IRGRP) ? ft_putchar('r') : ft_putchar('-'));
((buf->st_mode & S_IWGRP) ? ft_putchar('w') : ft_putchar('-'));
((buf->st_mode & S_IXGRP) ? ft_putchar('x') : ft_putchar('-'));
((buf->st_mode & S_IROTH) ? ft_putchar('r') : ft_putchar('-'));
((buf->st_mode & S_IWOTH) ? ft_putchar('w') : ft_putchar('-'));
((buf->st_mode & S_IXOTH) ? ft_putchar('x') : ft_putchar('-'));
//if (listxattr(file_path, NULL, 5, XATTR_NOFOLLOW) > 0)
//	ft_putchar('@');
ft_putstr("  ");
}

void	fonction2(struct dirent	*dir_name)
{
	struct stat 	buf;
	struct passwd 	*pd;
	struct group 	*grp;

	stat(dir_name->d_name, &buf);
	file_attributes(&buf, (char *)dir_name->d_name);
 	ft_putchar(' ');
	pd = getpwuid(buf.st_uid);
	ft_putstr(pd->pw_name);
	ft_putchar(' ');
	grp = getgrgid(buf.st_gid);
	ft_putstr(grp->gr_name);
	ft_putchar(' ');
	ft_putnbr(buf.st_size);
	ft_putchar('\t');
	ft_putstr(dir_name->d_name);
	ft_putchar(' ');
	ft_putchar('\n');
}