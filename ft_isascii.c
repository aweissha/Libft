/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aweissha <aweissha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 11:25:32 by aweissha          #+#    #+#             */
/*   Updated: 2023/10/04 11:31:02 by aweissha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft"

int	ft_isascii(int c)
{
	if(c >= 0 && c <= 127)
		return (1);
	else
		return (0);
}
