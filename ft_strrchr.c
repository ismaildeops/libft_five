/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilaakoub <marvin@42.fr>                    +#+  +#+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/15 15:32:46 by ilaakoub          #+#    #+#             */
/*   Updated: 2026/10/15 15:32:46 by ilaakoub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int				s_len;
	unsigned char	ch;

	ch = (unsigned char)c;
	s_len = 0;
	while (s[s_len])
		s_len++;
	while (s_len >= 0)
	{
		if ((unsigned char)s[s_len] == ch)
			return ((char *)&s[s_len]);
		s_len--;
	}
	return (NULL);
}
