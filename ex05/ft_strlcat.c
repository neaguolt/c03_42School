/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: deb <neaguolt@gmail.com>                   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/06 14:15:57 by deb               #+#    #+#             */
/*   Updated: 2024/08/06 15:51:42 by deb              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size);

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	it;
	unsigned int	cat_size;

	cat_size = 0;
	while (src[cat_size] != '\0')
		cat_size++;
	it = 0;
	while (dest[it] != '\0')
		it++;
	if (size <= it)
		return (size + cat_size);
	cat_size = cat_size + it;
	while ((*src != '\0') && (it < size - 1))
	{
		dest[it] = *src;
		src++;
		it++;
	}
	dest[it] = '\0';
	return (cat_size);
}
/*
int	main(void)
{
	char	*src;
	char	dest[20] = "1337 42";
	int		size;

	src = "Born to code";
    size = 20;
	ft_strlcat(dest, src, size);
} */
