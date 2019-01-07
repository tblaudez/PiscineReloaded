/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft-display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tblaudez <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/04 10:43:07 by tblaudez          #+#    #+#             */
/*   Updated: 2018/04/04 10:43:08 by tblaudez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_display_file.h"
#include <unistd.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>

int		ft_putchar(char c)
{
	write(1, &c, 1);
	return (0);
}

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
}

int		main(int argc, char **argv)
{
	int		fd;
	int		lgth;
	char	buf[BUF_SIZE + 1];

	if (argc == 1)
	{
		ft_putstr("File name missing.\n");
		return (ARG_ERR);
	}
	else if (argc >= 3)
	{
		ft_putstr("Too many arguments.\n");
		return (ARG_ERR);
	}
	fd = open(argv[1], O_RDONLY);
	lgth = read(fd, buf, BUF_SIZE);
	buf[lgth] = '\0';
	ft_putstr(buf);
	return (SUCCESS);
}
