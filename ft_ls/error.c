/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmahele <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/01 16:39:02 by pmahele           #+#    #+#             */
/*   Updated: 2017/09/01 16:39:17 by pmahele          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ls.h"

void	error_arg(char arg)
{
	ft_putstr_fd("ft_ls: illegal option -- ", 2);
	ft_putchar_fd(arg, 2);
	ft_putstr_fd("\nusage: ft_ls [-Rafglrtu1] [file ...]\n", 2);
	exit(EXIT_FAILURE);
}

void	basicerror(char *name, char *error, int ex)
{
	ft_putstr_fd(name, 2);
	perror(error);
	if (ex)
		exit(EXIT_FAILURE);
}
