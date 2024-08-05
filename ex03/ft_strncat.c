/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: deb <neaguolt@gmail.com>                   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/05 13:46:33 by deb               #+#    #+#             */
/*   Updated: 2024/08/05 14:24:50 by deb              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb);

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	it;
	char			*dest_start;

	dest_start = dest;
	while (*dest != '\0')
		dest++;
	it = 0;
	while ((src[it] != '\0') && (it < nb))
	{
		dest[it] = src[it];
		it++;
	}
	dest[it] = '\0';
	return (dest_start);
}
