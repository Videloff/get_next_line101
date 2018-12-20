/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   get_next_line.h                                  .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: videloff <videloff@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/10/30 10:34:07 by videloff     #+#   ##    ##    #+#       */
/*   Updated: 2018/12/03 11:34:50 by videloff    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# define BUFF_SIZE 32

# include "./libft/libft.h"
# include <stdlib.h>
# include <unistd.h>

typedef struct		s_fdlist
{
	char			*str;
	int				fd;
	struct s_fdlist	*next;
}					t_fdlist;

int					get_next_line(const int fd, char **line);

#endif
