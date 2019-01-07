/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tblaudez <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/03 16:59:45 by tblaudez          #+#    #+#             */
/*   Updated: 2018/04/03 16:59:46 by tblaudez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int *tab;
	int i;

	if (min >= max)
		return (0);
	i = -1;
	tab = malloc(sizeof(int) * (max - min));
	while (++i < (max - min))
		tab[i] = min + i;
	return (tab);
}
