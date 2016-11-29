/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edeveze <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/02 19:09:24 by edeveze           #+#    #+#             */
/*   Updated: 2016/11/02 19:21:58 by edeveze          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_factorial(int nb)
{
	int i;
	int result;

	i = 1;
	result = 1;
	if (nb > 12 || nb < 0)
		return (0);
	if (nb == 0)
		result = 1;
	else
	{
		while (i <= nb)
		{
			result = result * i;
			i++;
		}
	}
	return (result);
}
