/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_len_split.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lflandri <lflandri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 17:40:56 by lflandri          #+#    #+#             */
/*   Updated: 2022/11/03 20:05:33 by lflandri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_len_strtab(char **strtab)
{
	int	count;

	count = 0;
	while (strtab[count])
	{
		count++;
	}
	return (count);
}
