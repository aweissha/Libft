/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aweissha <aweissha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 11:08:53 by aweissha          #+#    #+#             */
/*   Updated: 2023/10/10 13:04:15 by aweissha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	end;
	char	*trimmed;

	start = 0;
	end = ft_strlen(s1);
	while (ft_strchr(set, s1[start]) != 0 && s1[start] != '\0')
		start++;
	while (ft_strchr(set, s1[end - 1]) != 0 && end > start)
		end--;
	trimmed = malloc(end - start + 1);
	if (trimmed == NULL)
		return (NULL);
	ft_strlcpy(trimmed, (s1 + start), (end - start + 1));
	return (trimmed);
}

// #include <stdio.h>
// int main(void)
// {
// 	char s1[] = "xxzxxzy  ";
// 	char set[] = "xyz 	";
// 	printf("%s\n", ft_strtrim(s1, set));
// }
