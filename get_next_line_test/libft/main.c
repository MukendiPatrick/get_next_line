/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   gnl_main.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtshisw <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/15 17:33:00 by mtshisw           #+#    #+#             */
/*   Updated: 2018/06/16 11:09:38 by mtshisw          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "get_next_line.h"
#include "libft.h"
#include <fcntl.h>
#include <stdlib.h>
#include <unistd.h>

int		main(int argc, char **argv)
{
    int     i;
    int     j;
	int		*fd;
	char	*line;

    if (argc > 1)
    {
        line = ft_strnew(100);
        fd = ft_memalloc(argc - 1);
        i = 1;
        j = 0;
        while (argv[i])
        {
            fd[j] = open(argv[i], O_RDONLY);
            i++;
            j++;
        }
        j = 0;
        while (get_next_line(fd[j], &line) == 1)
        {
            ft_putendl(line);
            free(line);
            j++;
            if (get_next_line(fd[j], &line) == 0)
                break ;
            ft_putendl(line);
            free(line);
            j++;
            if (get_next_line(fd[j], &line) == 0)
                break ;
            ft_putendl(line);
            free(line);
            j = 0;
        }
    }
	return (0);
}
