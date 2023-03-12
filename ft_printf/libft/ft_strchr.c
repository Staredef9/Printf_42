/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsalvett <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 11:18:40 by fsalvett          #+#    #+#             */
/*   Updated: 2022/10/22 12:39:41 by fsalvett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	*string;
	size_t	i;
	size_t	j;

	i = 0;
	string = (char *) s;
	j = ft_strlen(string);
	while (i < j)
	{
		if (string[i] == (char)c)
			return (string + i);
		i++;
	}
	if (string[i] == (char)c)
		return (string + i);
	else
		return (NULL);
}
