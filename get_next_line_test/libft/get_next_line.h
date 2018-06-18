/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtshisw <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/15 10:26:31 by mtshisw           #+#    #+#             */
/*   Updated: 2018/06/16 10:18:18 by mtshisw          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# define BUFF_SIZE 1

int		search_nwl(char **temp_buff, char **line);
int		get_next_line(int const fd, char **line);
char	*ft_cat(char *str1, char *str2);

#endif
