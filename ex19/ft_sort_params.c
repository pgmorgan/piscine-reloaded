/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmorgan- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/15 13:26:21 by pmorgan-          #+#    #+#             */
/*   Updated: 2018/08/16 16:55:21 by pmorgan-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_putstr(char *str)
{
	while (*str)
	{
		ft_putchar(*str);
		str++;
	}
	return ;
}

int		ft_strcmp(char *s1, char *s2)
{
	if (!*s1 && !*s2)
		return (0);
	else if (*s1 != *s2)
		return (*s1 - *s2);
	return (ft_strcmp(s1 + 1, s2 + 1));
}

int		main(int argc, char **argv)
{
	int		i;
	char	*temp;

	argv++;
	i = 0;
	while (i < argc - 2)
	{
		if (ft_strcmp(argv[i], argv[i + 1]) > 0)
		{
			temp = argv[i];
			argv[i] = argv[i + 1];
			argv[i + 1] = temp;
			i = 0;
		}
		else
			i++;
	}
	i = 0;
	while (i < argc - 1)
	{
		ft_putstr(argv[i]);
		ft_putchar('\n');
		i++;
	}
	return (0);
}
