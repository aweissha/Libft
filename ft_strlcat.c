/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aweissha <aweissha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/08 11:34:37 by aweissha          #+#    #+#             */
/*   Updated: 2023/10/08 12:29:24 by aweissha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *restrict dst, const char *restrict src, size_t dstsize)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while (dst[i] != '\0')
		i++;
	if (dstsize == 0)
	{
		while (src[j] != '\0')
			j++;
		return (i + j);
	}
	while (src[j] != '\0' && (i + j) < (dstsize - 1))
	{
		dst[i + j] = src[j];
		j++;
	}
	if ((i + j) < dstsize)
		dst[i + j] = '\0';
	while (src[j] != '\0')
		j++;
	return (i + j);
}

// #include <stdio.h>
// #include <string.h>
// int main(void)
// {
// 	char src[] = "hello";
// 	char dst[] = "bla";

// 	strlcat(dst, src, 6);
// 	printf("%s", dst);
// }