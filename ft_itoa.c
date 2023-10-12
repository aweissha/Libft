/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aweissha <aweissha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 11:48:00 by aweissha          #+#    #+#             */
/*   Updated: 2023/10/12 12:47:16 by aweissha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	digits(int n)
{
	unsigned int	counter;

	if (n == 0)
		return (1);
	counter = 0;
	while (n != 0)
	{
		n = n / 10;
		counter++;
	}
	return (counter);
}

char	*ft_itoa(int n)
{
	char			*number;
	unsigned int	nbrlen;

	nbrlen = digits(n);
	if (n < 0)
		nbrlen++;
	number = malloc(nbrlen + 1);
	number[nbrlen] = '\0';
	if (n < 0)
	{
		number[0] = '-';
		n = n * (-1);
	}
	nbrlen--;
	if (n == 0)
		number[nbrlen] = 48;
	while (n != 0)
	{
		number[nbrlen] = (n % 10) + 48;
		n = n / 10;
		nbrlen--;
	}
	return (number);
}

// #include <printf.h>
// int main(void)
// {
// 	int n = 0;
// 	printf("%s\n", ft_itoa(n));
// }
