/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: deb <neaguolt@gmail.com>                   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/05 11:16:43 by deb               #+#    #+#             */
/*   Updated: 2024/08/05 11:37:55 by deb              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n);

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	it;

	it = 0;
	while ((s1[it] != '\0') && (s2[it] != '\0') && (it < n) && (s1[it] == s2[it]))
		it++;
	if (it == n)
		return (0);
	else
		return ((unsigned char)s1[it] - (unsigned char)s2[it]);
}
