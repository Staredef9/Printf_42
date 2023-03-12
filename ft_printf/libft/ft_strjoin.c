/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsalvett <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/15 15:05:12 by fsalvett          #+#    #+#             */
/*   Updated: 2022/10/15 15:05:15 by fsalvett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str_return;
	int		total_size;

	total_size = ft_strlen(s1) + ft_strlen(s2) + 1;
	str_return = (char *)malloc(sizeof(*s1) * total_size);
	if (!str_return)
		return (NULL);
	ft_strlcpy(str_return, s1, total_size + 1);
	ft_strlcat(str_return, s2, total_size + 1);
	return (str_return);
}
