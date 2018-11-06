/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmorgan- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/05 16:59:13 by pmorgan-          #+#    #+#             */
/*   Updated: 2018/08/11 11:27:41 by pmorgan-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_factorial(int nb)
{
	int counter;
	int output_nb;

	if (nb == 0)
		return (1);
	counter = 1;
	output_nb = nb;
	while (counter < nb)
	{
		output_nb *= (nb - counter);
		++counter;
	}
	return (nb < 0 ? 0 : output_nb);
}
