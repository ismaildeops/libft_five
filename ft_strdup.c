/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilaakoub <marvin@42.fr>                    +#+  +#+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/19 12:22:12 by ilaakoub          #+#    #+#             */
/*   Updated: 2026/10/30 10:54:16 by ilaakoub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include <stdlib.h>
#include<string.h>
char	*ft_strdup(const char *s)
{
	char	*copy;
	size_t	len;
	size_t	i;

	if(s == NULL)
		s = "";
	len = strlen(s);
	copy = malloc(sizeof(char) * (len + 1));
	if (copy == NULL)
		return (NULL);
	i = 0;
	while (i < len)
	{
		copy[i] = s[i];
		i++;
	}
	copy[i] = '\0';
	return (copy);
}
