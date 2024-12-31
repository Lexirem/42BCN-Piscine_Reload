/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvallrib <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/31 13:04:01 by mvallrib          #+#    #+#             */
/*   Updated: 2024/12/31 13:04:14 by mvallrib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_recursive_factorial(int nb)
{
	int	result;

	result = 1;
	if (nb < 0)
		return (0);
	if (nb > 0)
	{
		result *= nb * ft_recursive_factorial(nb - 1);
		nb -= 1;
	}
	return (result);
}

/*int	main(void)
{
	int num;
	int fact;
	
	num = 1;
	fact = ft_recursive_factorial(num);

	if (fact == 0 && num < 0)
		return (0);
	else
		printf("el factorial de  %d es %d\n", num, fact);

	return 0;
}*/
