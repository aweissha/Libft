/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aweissha <aweissha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 11:21:22 by aweissha          #+#    #+#             */
/*   Updated: 2023/10/09 12:24:11 by aweissha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;
	size_t	k;
	size_t	len_needle;

	len_needle = ft_strlen(needle);
	if (len_needle == 0)
		return ((char *)haystack);
	i = 0;
	while (i < len && haystack[i + len_needle - 1] != '\0')
	{
		j = i;
		k = 0;
		while (haystack[j] == needle[k] && haystack[j] != '\0'
			&& needle[k] != '\0' && j < len)
		{
			j++;
			k++;
		}
		if (needle[k] == '\0')
			return ((char *)&haystack[i]);
		i++;
	}
	return (NULL);
}

// #include <stdio.h>
// #include <string.h>
// int	main(void)
// {
// 	char haystack[] = "etyhhellonveiosvyrbhv";
// 	char needle[] = "hello";
// 	printf("%p\n", ft_strnstr(haystack, needle, 15));
// 	printf("%p\n", strnstr(haystack, needle, 15));
// }
