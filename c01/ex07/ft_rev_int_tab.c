/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: djanssen <djanssen@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/18 14:54:09 by djanssen          #+#    #+#             */
/*   Updated: 2022/08/21 13:40:51 by djanssen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	tmp;

	i = 0;
	size--;
	while (i < size)
	{
		tmp = tab[i];
		tab[i] = tab[size];
		tab[size] = tmp;
		i++;
		size--;
	}
}
