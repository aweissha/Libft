/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aweissha <aweissha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 11:20:54 by aweissha          #+#    #+#             */
/*   Updated: 2023/10/05 12:35:32 by aweissha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stdio.h"

void *ft_memset(void *b, int c, size_t len)
{
	size_t i;
	i = 0;
	while (i < len)
		b[i] = (char)c;
	return (b);
}

// int main(void)
