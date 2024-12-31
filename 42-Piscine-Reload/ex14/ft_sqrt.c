/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvallrib <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/31 13:04:39 by mvallrib          #+#    #+#             */
/*   Updated: 2024/12/31 13:04:50 by mvallrib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_sqrt(int nb)
{
	int	exp;
	int	base;

	base = nb;
	if (base <= 0)
		return (0);
	if (base == 1)
		return (1);
	exp = 2;
	if (base >= 2)
	{
		while (exp * exp <= base)
		{
			if (exp * exp == base)
				return (exp);
			exp++;
		}
	}
	return (0);
}

/*int	main(void)
{
	printf("l'arrel es %d\n", ft_sqrt(2));
	printf("l'arrel es %d\n", ft_sqrt(9));
	printf("l'arrel es %d\n", ft_sqrt(0));
	printf("l'arrel es %d\n", ft_sqrt(69));
}*/
