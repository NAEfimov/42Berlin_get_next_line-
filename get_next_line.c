/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nefimov <nefimov@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/04 13:11:59 by nefimov           #+#    #+#             */
/*   Updated: 2024/12/06 15:16:11 by nefimov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

/*
	Get_next_line() function read next line from the text file pointed by the
	file descriptor.

	INPUT:  file descriptor 'fd'
	RETURN: return the line that was read.
			If there is nothing else to read or if an error occurred,
			it should return NULL.
*/
char	*get_next_line(int fd)
{
	static char		buff[BUFFER_SIZE];
	ssize_t			i;

	i = check_init_buff(buff, fd);
	if (i < 0)
		return (NULL);
	return (read_new_line(i, buff, fd));
}
