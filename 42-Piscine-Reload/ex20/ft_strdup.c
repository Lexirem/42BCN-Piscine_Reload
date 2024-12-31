/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvallrib <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/31 13:09:01 by mvallrib          #+#    #+#             */
/*   Updated: 2024/12/31 13:09:07 by mvallrib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
//#include <stdio.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_strdup(char *src)
{
	char	*copy;
	char	*iterator;	

	iterator = malloc((ft_strlen(src) + 1) * sizeof(char));
	if (src == NULL || !iterator)
	{
		return (0);
	}
	copy = iterator;
	while (*src != '\0')
	{
		*iterator = *src;
		src++;
		iterator++;
	}
	*iterator = '\0';
	return (copy);
}

/*int	main(void)
{
	char	*temp;
	char	*dup;

	temp = "kdsvbflkjsabr97q34ytouabsgvv24-9i9tiglnkz257";
	dup = ft_strdup(temp);
	printf("%s", dup);
	free(dup);
	return (0);
}*/
