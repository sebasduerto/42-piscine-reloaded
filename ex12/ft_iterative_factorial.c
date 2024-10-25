/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sduerto- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/10 12:23:40 by sduerto-          #+#    #+#             */
/*   Updated: 2024/09/13 11:18:55 by sduerto-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	temp;
	int	result;

	if (nb < 0 || nb > 13)
		return (0);
	if (nb == 0)
		return (1);
	temp = nb;
	result = 1;
	while (temp > 1)
	{
		result *= temp;
		temp--;
	}
	return (result);
}
