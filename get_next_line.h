/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alecasti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/24 18:59:49 by alecasti          #+#    #+#             */
/*   Updated: 2021/01/10 19:42:06 by alecasti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H
# include <sys/types.h>
# include <sys/uio.h>
# include <unistd.h>
# include <stdlib.h>
# ifndef EOL
#   define EOL    '\n'
# endif
# ifndef BUFFER_SIZE
#   define BUFFER_SIZE  100
# endif

int get_next_line(int fd, char **line);

#endif
