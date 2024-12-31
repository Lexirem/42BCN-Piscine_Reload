/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvallrib <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/31 12:57:00 by mvallrib          #+#    #+#             */
/*   Updated: 2024/12/31 12:57:11 by mvallrib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_print_numbers(void)
{
	char	num;

	num = '0';
	while (num >= '0' && num <= '9')
	{
		ft_putchar(num);
		num++;
	}
}

/*int main(void)
{
	ft_print_numbers();
}*/
