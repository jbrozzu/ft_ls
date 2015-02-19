/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbrozzu <jbrozzu@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/12/07 15:10:14 by jbrozzu           #+#    #+#             */
/*   Updated: 2014/12/07 18:51:54 by jbrozzu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ls.h"

int		main(int ac, char **av)
{
	if (ac == 1 || (ft_strcmp(av[1], "--") == 0))
		ft_ls_alone();
	if (ac == 2 && (ft_strcmp(av[1], "-a") == 0))
		ft_ls_a_alone();
	if (ac == 2 && (ft_strcmp(av[1], "-l") == 0))
		ft_ls_l_alone();
	if (ac == 2 && (ft_strcmp(av[1], "-la") == 0))
		ft_ls_la_alone();
	//else if (ac > 1)
		//	get_args(argc, argv);
	//	return (0);
	return (0);
}
