/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvallrib <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/31 13:08:18 by mvallrib          #+#    #+#             */
/*   Updated: 2024/12/31 13:08:24 by mvallrib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] == s2[i] && s1[i] != '\0')
		i++;
	return (s1[i] - s2[i]);
}

void	ft_print_arg(int ac, char **av)
{
	int	i;
	int	j;

	i = 1;
	while (i < ac)
	{
		j = 0;
		while (av[i][j] != '\0')
		{
			ft_putchar(av[i][j]);
			j++;
		}
		i++;
		ft_putchar('\n');
	}
}

int	main(int ac, char **av)
{
	int		i;
	int		j;
	char	*arg;

	i = 1;
	while (i < ac)
	{
		j = i;
		while (ft_strcmp(av[j], av[j - 1]) < 0 && j > 1)
		{
			arg = av[j - 1];
			av[j - 1] = av[j];
			av[j] = arg;
			j--;
		}
		i++;
	}
	ft_print_arg(ac, av);
	return (0);
}
