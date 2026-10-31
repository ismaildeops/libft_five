/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilaakoub <marvin@42.fr>                    +#+  +#+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/22 17:23:44 by ilaakoub          #+#    #+#             */
/*   Updated: 2026/10/30 10:57:40 by ilaakoub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	len_s1;
	size_t	len_s2;
	char	*r;

	if (s1 == NULL )
		s1 = "";
	if (s2 == NULL)
		s2 = "";   
	len_s1 = ft_strlen(s1);
	len_s2 = ft_strlen(s2);
	r = malloc(len_s1 + len_s2 + 1);
	if (r == 0)
		return (NULL);
	r[0] = '\0';
	ft_strlcat(r, s1, len_s1 + 1);
	ft_strlcat(r, s2, len_s1 + len_s2 + 1);
	return (r);
}
