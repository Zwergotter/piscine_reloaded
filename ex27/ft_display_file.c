/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edeveze <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/04 19:45:21 by edeveze           #+#    #+#             */
/*   Updated: 2016/11/05 22:11:43 by edeveze          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <unistd.h>
#include <sys/uio.h>

#define BUF_SIZE 10

int			main(int argc, char **argv)
{
	int		fd;
	int		ret;
	char	buf[BUF_SIZE + 1];

	if (argc < 2)
		return (write(2, "File name missing.\n", 19));
	if (argc > 2)
		return (write(2, "Too many arguments.\n", 20));
	if ((fd = open(argv[1], O_RDONLY)) == -1)
		return (write(2, "open() error\n", 13));
	while ((ret = read(fd, buf, BUF_SIZE)))
	{
		buf[ret] = '\0';
		write(1, buf, ret);
	}
	if (close(fd) == -1)
		return (write(2, "open() error\n", 13));
	return (0);
}
