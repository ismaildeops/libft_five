/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilaakoub <marvin@42.fr>                    +#+  +#+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/18 15:35:23 by ilaakoub          #+#    #+#             */
/*   Updated: 2026/10/18 15:35:23 by ilaakoub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	end;

	if (!s1)
		s1 = "";
	if (!set)
		set = "";
	start = 0;
	while (s1[start] && (ft_strchr(set, s1[start])))
		start++;
	end = ft_strlen(s1);
	while (end > start && (ft_strchr(set, s1[end - 1])))
		end--;
	return (ft_substr(s1, start, end - start));
}
