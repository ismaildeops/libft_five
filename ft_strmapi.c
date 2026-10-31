/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilaakoub <marvin@42.fr>                    +#+  +#+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/19 21:14:00 by ilaakoub        #+#    #+#             */
/*   Updated: 2026/10/19 21:14:00 by ilaakoub       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static char	ft_map_char(unsigned int index, char c,
		char (*f)(unsigned int, char))
{
	if (f == NULL)
		return (c);
	return (f(index, c));
}

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*mapped;
	size_t	length;
	size_t	i;

	if (s == NULL)
		s = "";
	length = 0;
	while (s[length] != '\0')
		length++;
	mapped = malloc(length + 1);
	if (mapped == NULL)
		return (NULL);
	i = 0;
	while (i < length)
	{
		mapped[i] = ft_map_char((unsigned int)i, s[i], f);
		i++;
	}
	mapped[i] = '\0';
	return (mapped);
}
