/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sduerto- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/21 11:55:48 by sduerto-          #+#    #+#             */
/*   Updated: 2024/09/21 13:37:25 by sduerto-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>

void	display_file(int fd)
{
	char	buffer;
	int		b_read;

	while (1)
	{
		b_read = read(fd, &buffer, 1);
		if (b_read <= 0)
			break ;
		write(1, &buffer, 1);
	}
	if (b_read == -1)
	{
		write(2, "Cannot read file.\n", 18);
		return ;
	}
}

int	main(int argc, char *argv[])
{
	int	fd;

	if (argc != 2)
	{
		if (argc < 2)
			write(2, "File name missing.\n", 19);
		if (argc > 2)
			write(2, "Too many arguments.\n", 20);
		return (1);
	}
	fd = open(argv[1], O_RDONLY);
	display_file(fd);
	close(fd);
	return (0);
}
