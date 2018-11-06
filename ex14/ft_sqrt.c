/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmorgan- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/05 18:31:42 by pmorgan-          #+#    #+#             */
/*   Updated: 2018/08/09 14:13:55 by pmorgan-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_recursive_sqrt(int sqrt, int nb)
{
	if ((sqrt * sqrt) < nb)
		return (ft_recursive_sqrt(sqrt + 1, nb));
	else if ((sqrt * sqrt) == nb)
		return (sqrt);
	return (0);
}

int		ft_sqrt(int nb)
{
	int sqrt;

	sqrt = 1;
	return (ft_recursive_sqrt(sqrt, nb));
}
