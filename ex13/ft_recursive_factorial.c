/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fkhrazz <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/19 16:11:34 by fkhrazz           #+#    #+#             */
/*   Updated: 2018/11/19 16:27:16 by fkhrazz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_recursive_factorial(int nb)
{
	int c;
	int fact;

	c = nb;
	if (c < 0 || c > 12)
		return (0);
	if (c == 0 || c == 1)
		return (1);
	return (ft_recursive_factorial(c - 1) * c);
}
