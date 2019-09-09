/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: momogash <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/09 12:04:59 by momogash          #+#    #+#             */
/*   Updated: 2019/09/09 13:08:03 by momogash         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# define BUFF_SIZE 32
# define MAX_FD 1024

# include "Libft/libft.h"
# include <fcntl.h>

int	get_next_line(int fd, char **line);

#endif
