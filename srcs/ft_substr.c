/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldutriez <ldutriez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/09 19:12:54 by ldutriez          #+#    #+#             */
/*   Updated: 2020/02/24 14:25:56 by ldutriez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*new_s;
	size_t	i;

	new_s = NULL;
	i = 0;
	if (!s)
		return (NULL);
	if (start > ft_strlen(s))
	{
		if (!(new_s = (char *)malloc(sizeof(char))))
			return (NULL);
		new_s[0] = '\0';
		return (new_s);
	}
	if (!(new_s = (char *)malloc(sizeof(char) * (len + 1))))
		return (NULL);
	while (s[start + i] != '\0' && i < len)
	{
		new_s[i] = s[start + i];
		i++;
	}
	new_s[i] = '\0';
	return (new_s);
}
