/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ls.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbrozzu <jbrozzu@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/12/07 15:10:40 by jbrozzu           #+#    #+#             */
/*   Updated: 2014/12/08 19:17:00 by jbrozzu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_LS_H
# define FT_LS_H

# include <unistd.h>
# include <sys/types.h>
# include <dirent.h>
# include <sys/stat.h>
# include <pwd.h>
# include <grp.h>
//# include <attr/xattr.h>
# include <time.h>
# include <stdlib.h>
# include <stdio.h>
# include <string.h> 
# include <errno.h>

void				ft_perror(int code, char c, char *str);
void				ft_puterror(char const *s);
void				ft_writerror(char c);
static void			nocmd(char *dir_path);
int					ft_list_dir(char *cmd, char *dir_path);



//typedef struct		s_stat
//{
//	dev_t			st_dev;      /* Périphérique                */
//	ino_t			st_ino;      /* Numéro i-noeud              */
//	mode_t			st_mode;     /* Protection                  */
//	nlink_t			st_nlink;    /* Nb liens matériels          */
//	uid_t			st_uid;      /* UID propriétaire            */
//	gid_t			st_gid;      /* GID propriétaire            */
//	dev_t			st_rdev;     /* Type périphérique           */
//	off_t			st_size;     /* Taille totale en octets     */
//	unsigned long	st_blksize;  /* Taille de bloc pour E/S     */
//	unsigned long	st_blocks;   /* Nombre de blocs alloués     */
//	time_t			st_atime;    /* Heure dernier accès         */
//	time_t			st_mtime;    /* Heure dernière modification */
//	time_t			st_ctime;    /* Heure dernier changement    */
//}					t_stat;

//typedef struct		s_time
//{
//	int 			tm_sec;         /* secondes           */
//	int 			tm_min;         /* minutes            */
//	int 			tm_hour;        /* heures             */
//	int 			tm_mday;        /* quantième du mois  */
//	int 			tm_mon;         /* mois (0 à 11 !)    */
//	int 			tm_year;        /* année              */
//	int 			tm_wday;        /* jour de la semaine */
//	int 			tm_yday;        /* jour de l'année    */
//	int 			tm_isdst;       /* décalage horaire   */
//}					t_time;

//struct dirent 
//{
//	ino_t          d_ino;       /* numéro d'inœud */
//	off_t          d_off;       /* décalage jusqu'à la dirent suivante */
//	unsigned short d_reclen;    /* longueur de cet enregistrement */
//	unsigned char  d_type;      /* type du fichier */
//  char           d_name[256]; /* nom du fichier */
//};

#endif
