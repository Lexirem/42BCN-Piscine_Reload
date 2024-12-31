/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvallrib <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/31 12:59:59 by mvallrib          #+#    #+#             */
/*   Updated: 2024/12/31 13:00:08 by mvallrib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	x;

	x = *a;
	*a = *b;
	*b = x;
}

/*int	main(void)
{
	int a = 2;
	int b = 5;

	ft_swap(&a, &b);
	printf("despues del cambio: a = %d, b = %d\n" ,a, b);
	return 0;
}*/
