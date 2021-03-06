/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnlen.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtshisw <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/08 14:35:35 by mtshisw           #+#    #+#             */
/*   Updated: 2018/06/08 14:45:19 by mtshisw          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strnlen(const char *str, size_t maxlen)
{
	size_t i;

	i = 0;
	while (str[i] != '\0' && maxlen > 0)
	{
		i++;
		maxlen--;
	}
	return (i);
}
