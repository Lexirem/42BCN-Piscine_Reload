/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvallrib <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/31 13:00:32 by mvallrib          #+#    #+#             */
/*   Updated: 2024/12/31 13:00:42 by mvallrib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

/*int	main(void)
{
	int a = 50;
	int b = 10;
	int div;
	int mod;

	ft_div_mod(a, b, &div, &mod);

	printf("La divisio es: %d\n", div);
	printf("El restant es: %d\n", mod);

	return 0;	
}*/
