/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aweissha <aweissha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/08 18:06:18 by aweissha          #+#    #+#             */
/*   Updated: 2023/10/12 19:13:33 by aweissha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	last;

	last = ft_strlen(s);
	if (last == 0)
		return (NULL);
	while (last > 0)
	{
		if (s[last] == c)
			return ((char *)&s[last]);
		last--;
	}
	if (s[last] == c)
		return ((char *)&s[last]);
	return (NULL);
}

// #include <stdio.h>
// #include <string.h>
// int	main(void)
// {
// 	char str[] = "hello world";
// 	printf("%li", (ft_strrchr(str, '\0') - ft_strrchr(str, 'w')));
// }