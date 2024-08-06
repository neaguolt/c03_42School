/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: deb <neaguolt@gmail.com>                   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/05 14:26:51 by deb               #+#    #+#             */
/*   Updated: 2024/08/06 14:10:31 by deb              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include "helper.h"

char	*ft_strstr(char *str, char *to_find);

char	*ft_strstr(char *str, char *to_find)
{
	char	*start;
	char	*rst;

	if (!*to_find)
		return (str);
	rst = to_find;
	while (*to_find != '\0')
	{
		while ((*str != '\0') && (*str != *to_find))
			str++;
		if (!*str)
			return (0);
		start = str++;
		to_find++;
		while ((*to_find != '\0') && (*str != '\0') && (*to_find == *str))
		{
			str++;
			to_find++;
		}
		if (!*to_find)
			return (start);
		str = start + 1;
		to_find = rst;
	}
	return (0);
}
/*
int	main(void)
{
	writestring(ft_strstr("abdbcdef", "bcd"));
} */
