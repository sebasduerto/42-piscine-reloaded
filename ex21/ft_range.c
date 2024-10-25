/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sduerto- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/15 10:38:31 by sduerto-          #+#    #+#             */
/*   Updated: 2024/09/15 12:51:15 by sduerto-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	i;
	int	count;
	int	*range;

	if (min >= max)
		return (NULL);
	count = max - min;
	range = malloc(sizeof(int) * count);
	if (range == NULL)
		return (NULL);
	i = 0;
	while (i < count)
	{
		range[i] = min + i;
		i++;
	}
	return (range);
}
