/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alpeliss <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/03 18:25:58 by alpeliss          #+#    #+#             */
/*   Updated: 2019/11/03 18:31:34 by alpeliss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "unistd.h"

int	main(int ac, char **av)
{
	int	i;

	i = 0;
	ac = 2;
	while (av[0][i])
		i++;
	write(1, av[0], i);
	write(1, "\n", 1);
	return (0);
}
