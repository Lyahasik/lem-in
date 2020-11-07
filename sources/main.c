/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhorker <dhorker@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/05 22:01:57 by lyahasik          #+#    #+#             */
/*   Updated: 2020/11/07 14:08:25 by dhorker          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lem-in.h"

t_data	*create_data();
{
	t_data	*data;

	data = (t_data*)mallok()
	return (data);
}

t_data	*processing_line(t_data *data, char *line)
{
	if (!data)
		create_data();

	return (data);
}

t_data	*reading_map(t_data *data)
{
	char	*line;

	while (get_next_line(0, &line))
	{
		if (ft_strlen(line) > 1 && line[0] == '#' && line[1] != '#')
		{
			continue ;
		}
		if (!(data = processing_line(data, line)))
		{
			return (0);
		}
	}
}

int	main(void)
{
	t_data	*data;

	data = reading_map(NULL);
	return (0);
}
