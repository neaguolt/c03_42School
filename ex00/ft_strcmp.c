/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: deb <neaguolt@gmail.com>                   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/05 09:55:37 by deb               #+#    #+#             */
/*   Updated: 2024/08/05 11:00:24 by deb              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include "helper.h"

// Reproduce the behavior of the function strcmp (man strcmp)
int	ft_strcmp(char *s1, char *s2);

int	ft_strcmp(char *s1, char *s2)
{
	while ((*s1 != '\0') && (*s2 != '\0') && (*s1 == *s2))
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);

}
/*
int	main(void)
{
	writenumber(ft_strcmp("bat", "cat"));
	return (0);
} */
