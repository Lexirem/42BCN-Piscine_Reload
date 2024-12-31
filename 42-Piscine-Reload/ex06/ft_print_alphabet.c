/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvallrib <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/31 12:56:19 by mvallrib          #+#    #+#             */
/*   Updated: 2024/12/31 12:56:32 by mvallrib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_print_alphabet(void)
{
	char	letter;

	letter = 'a';
	while (letter >= 'a' && letter <= 'z')
	{
		ft_putchar(letter);
		letter++;
	}
}

/*int main(void)
{
	ft_print_alphabet();
}*/
