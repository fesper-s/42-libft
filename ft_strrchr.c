/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fesper-s <fesper-s@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/04 14:46:33 by fesper-s          #+#    #+#             */
/*   Updated: 2022/05/05 09:16:22 by fesper-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	*pst;

	pst = 0;
	i = 0;
	while (s[i] != 0)
	{
		if (c == s[i])
			pst = (char *) &s[i];
		i++;
	}
	return (pst);
}
