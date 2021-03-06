/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   type_lf_2.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fhagrave <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/13 11:52:03 by fhagrave          #+#    #+#             */
/*   Updated: 2019/05/13 14:08:07 by fhagrave         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	round_from_tail_lf(unsigned int res[MAX_DIGITS_LF],
		unsigned int num, unsigned int length)
{
	unsigned int i;
	unsigned int res_copy[MAX_DIGITS_LF];

	make_copy_lf(res, res_copy);
	i = 0;
	while (i < num)
	{
		if (res[i] > 5)
			res[i + 1]++;
		else if (res[i] == 5)
		{
			if (i == 0)
			{
				if (res[i + 1] % 2 != 0)
					res[i + 1]++;
			}
			else if (res_copy[i] == 5)
				help_norme_2_lf(res, res_copy, i);
		}
		release_overflow_lf(res, i);
		i++;
	}
	move_rigth_all_digits_lf(res, num, length);
}

void	make_copy_lf(unsigned int res[MAX_DIGITS_LF],
		unsigned int res_copy[MAX_DIGITS_LF])
{
	unsigned int i;

	i = 0;
	while (i < MAX_DIGITS_LF)
	{
		res_copy[i] = res[i];
		i++;
	}
}

void	move_rigth_all_digits_lf(unsigned int res[MAX_DIGITS_LF],
		unsigned int num, unsigned int length)
{
	unsigned int i;

	i = 0;
	while (i <= length)
	{
		res[i] = res[i + num];
		i++;
	}
}

void	release_overflow_lf(unsigned int res[MAX_DIGITS_LF],
		unsigned int i)
{
	unsigned int j;

	j = 0;
	while (res[i + j + 1] >= 10)
	{
		res[i + j + 2] += res[i + j + 1] / 10;
		res[i + j + 1] = res[i + j + 1] % 10;
		j++;
	}
}

void	help_norme_2_lf(unsigned int res[MAX_DIGITS_LF],
		unsigned int res_copy[MAX_DIGITS_LF], unsigned int i)
{
	unsigned int j;
	unsigned int because_of_break;

	because_of_break = 0;
	if (res_copy[i - 1] == 0)
	{
		j = i - 1;
		while (j > 0)
		{
			j--;
			if (res_copy[j] != 0)
			{
				res[i + 1]++;
				because_of_break = 1;
				break ;
			}
		}
		if (because_of_break == 0 && res[i + 1] % 2 != 0)
			res[i + 1]++;
	}
	else
		res[i + 1]++;
}
