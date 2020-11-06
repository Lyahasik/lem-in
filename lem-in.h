/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lem-in.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lyahasik <lyahasik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/05 22:31:13 by lyahasik          #+#    #+#             */
/*   Updated: 2020/11/06 00:11:49 by lyahasik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LEM_IN

# define LEM_IN

# include "libraries/libft/libft.h"

# define ERR_ERR		"ERROR"
# define ERR_READ		"ERROR: Reading error occured"
# define ERR_INC_INP	"ERROR: Incorrect input"
# define ERR_ROOM_DUP	"ERROR: Room name or coords has duplicate"
# define ERR_ANTS_NUM	"ERROR: Incorrect number of ants on input"
# define ERR_ROOM_NAME	"ERROR: Invalid room name"
# define ERR_MEM		"ERROR: Memory allocation"
# define ERR_LINK_INV	"ERROR: Inverted links"
# define ERR_LINK_DUP	"ERROR: Duplicate links"
# define ERR_START_NUM	"ERROR: More than one ##start cmd"
# define ERR_START_MISS	"ERROR: Missing ##start"
# define ERR_END_NUM	"ERROR: More than one ##end cmd"
# define ERR_END_END	"ERROR: Missing ##end"

typedef struct	s_room
{
	struct s_room	*start;
	struct s_room	*connect;
	char			*name;
	int				x;
	int				y;
}				t_room;

typedef struct	s_data
{
	int			ants_num;
	t_room		*room;
}				t_data;

void			test();

#endif
