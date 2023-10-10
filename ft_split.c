/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aweissha <aweissha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 13:04:22 by aweissha          #+#    #+#             */
/*   Updated: 2023/10/10 16:11:55 by aweissha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	count_words(char const *s, char c)
{
	unsigned int	counter;
	unsigned int	i;

	i = 0;
	counter = 0;
	while (s[i] != '\0')
	{
		i++;
		if (((s[i] == c || s[i] == '\0') && s[i - 1] != c))
			counter++;
	}
	return (counter);
}

int	strlength(char const *s, unsigned int index, char c)
{
	unsigned int	counter;

	counter = 1;
	while (index > 0 && s[index - 1] != c)
	{
		counter++;
		index--;
	}
	return (counter);
}

char	**ft_split(char const *s, char c)
{
	char			**array;
	unsigned int	i;
	unsigned int	j;
	unsigned int	strlen;

	if (!(array = malloc(sizeof(char *) * (count_words(s, c) + 1))))
		return (NULL);
	i = 0;
	j = 0;
	while (s[i])
	{
		i++;
		if (((s[i] == c || s[i] == '\0') && s[i - 1] != c))
		{
			strlen = strlength(s, i - 1, c);
			if (!(array[j] = malloc(strlen + 1)))
				return (NULL);
			ft_strlcpy(array[j++], &s[i - strlen], (strlen + 1));
		}
	}
	array[j] = NULL;
	return (array);
}

// #include <stdio.h>
// int main(void)
// {
// 	char str[] = "";
// 	char **array = ft_split(str, 'z');
// 	printf("%s", array[0]);
// }
