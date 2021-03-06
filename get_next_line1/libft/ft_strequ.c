/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strequ.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtshisw <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/30 12:28:07 by mtshisw           #+#    #+#             */
/*   Updated: 2018/06/01 10:30:25 by mtshisw          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strequ(char const *s1, char const *s2)
{
	if (s1 && s2)
	{
		while (*s1 != '\0')
		{
			if (*s1 != *s2)
				return (0);
			s1++;
			s2++;
		}
		if (*s1 == *s2)
			return (1);
		else
			return (0);
	}
	return (0);
}
