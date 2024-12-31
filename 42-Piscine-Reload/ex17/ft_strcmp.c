/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvallrib <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/31 13:06:55 by mvallrib          #+#    #+#             */
/*   Updated: 2024/12/31 13:07:04 by mvallrib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0')
	{
		i++;
	}
	if (s1[i] == s2[i])
		return (0);
	else
		return (s1[i] - s2[i]);
}

/*int	main(void)
{
	char	s1[] = "hello";
	char	s2[] = "people";
	char	s3[] = "you";

	printf("la comparacio de %s i %s es %d\n", s1, s2, ft_strcmp(s1, s2));
	printf("la comparacio de %s i %s es %d\n", s1, s3, ft_strcmp(s1, s3));
	return (0);
}*/
