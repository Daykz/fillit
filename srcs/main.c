/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sksourou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/04 16:38:44 by sksourou          #+#    #+#             */
/*   Updated: 2015/12/04 16:38:45 by sksourou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fillit.h>
#include <fcntl.h>

int		new_space_bis(char *n_map, int i)
{
	int	ct;

	ct = 0;
	while (ct < i)
	{
		n_map[ct] = '.';
		ct++;
	}
	n_map[ct++] = '\n';
	return (ct);
}

int		check_len(char *new_map)
{
	int	i;

	i = 0;
	while (new_map[i])
	{
		if (new_map[i] == '\n')
			return (i);
		i++;
	}
	return (0);
}

int		isupper(char c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	return (0);
}

int		main(int ac, char **av)
{
	if (ac != 2 || parse_map(av[1]) == 0)
	{
		write(1, "error\n", 6);
		return (0);
	}
	return (0);
}
