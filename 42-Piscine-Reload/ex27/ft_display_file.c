/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvallrib <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/31 13:14:16 by mvallrib          #+#    #+#             */
/*   Updated: 2024/12/31 13:14:24 by mvallrib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>
#define BUFFER_SIZE 4096 

void	display_file(int file)
{
	char	buffer[BUFFER_SIZE];
	int		bytes_read;

	while (1)
	{
		bytes_read = read(file, buffer, BUFFER_SIZE);
		if (bytes_read <= 0)
			break ;
		write(1, buffer, bytes_read);
	}
}

int	main(int argc, char **argv)
{
	int	file;

	if (argc < 2)
	{
		write(1, "File name missing.\n", 19);
		return (1);
	}
	if (argc > 2)
	{
		write(1, "Too many arguments.\n", 20);
		return (1);
	}
	file = open(argv[1], O_RDONLY);
	if (file == -1)
	{
		write(1, "Cannot read file.\n", 18);
		return (1);
	}
	display_file(file);
	close(file);
	return (0);
}
