/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tblaudez <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/03 14:09:40 by tblaudez          #+#    #+#             */
/*   Updated: 2018/04/03 14:30:13 by tblaudez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int tot;

	if (nb < 0 || nb > 12)
		return (0);
	if (nb == 0)
		return (1);
	tot = nb;
	while (--nb != 0)
		tot *= nb;
	return (tot);
}
