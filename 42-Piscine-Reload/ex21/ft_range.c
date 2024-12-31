/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvallrib <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/31 13:10:06 by mvallrib          #+#    #+#             */
/*   Updated: 2024/12/31 13:10:12 by mvallrib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	*ft_range(int min, int max)
{
	int	*iterator;
	int	i;
	int	array;

	i = 0;
	if (min >= max)
		return (0);
	array = max - min;
	iterator = malloc((array) * sizeof(int));
	while (i < array)
	{
		iterator[i] = min + i;
		i++;
	}
	return (iterator);
}

/*int	main(void)
{
	int	*arr;
	int	min;
	int	max;
	int	i;

	min = 5;
	max = 10;
	i = 0;
	arr = ft_range(min, max);
	if (arr == NULL)
	{
		return (0);
	}
	while (i < (max - min))
	{
		printf("%d ", arr[i]);
		i++;
		printf("\n");
	}
	free(arr);
	return (0);
}*/
