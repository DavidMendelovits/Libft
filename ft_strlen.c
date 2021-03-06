/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmendelo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/12 18:28:48 by dmendelo          #+#    #+#             */
/*   Updated: 2018/11/12 18:29:18 by dmendelo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int					ft_strlen(const char *str)
{
	int				i;

	if (!str)
		return (0);
	i = 0;
	while (str[i])
	{
		i += 1;
	}
	return (i);
}
