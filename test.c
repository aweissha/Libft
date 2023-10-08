#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	len;

	len = 0;
	while (src[len])
	{
		len++;
	}

	i = 0;
	j = 0;
	while (dst[i] && i < size)
		i++;
	while (src[j] && (i + j + 1) < size)
	{
		dst[i + j] = src[j];
		j++;
	}
	if (i < size)
		dst[i + j] = '\0';
	return (i + len);
}

#include <stdio.h>
#include <string.h>
int main(void)
{
	char src[] = "hello";
	char dst[] = "bla";

	ft_strlcat(dst, src, 6);
	printf("%s", dst);
}