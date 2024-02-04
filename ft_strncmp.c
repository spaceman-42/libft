/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jadiaz-b <jadiaz-b@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 17:39:22 by jadiaz-b          #+#    #+#             */
/*   Updated: 2024/02/03 16:37:32 by jadiaz-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (n == 0)
		return (0);
	{
		while (s1[i] != '\0' && i < n - 1 && s1[i] == s2[i])
			i++;
		return ((unsigned char)s1[i] - (unsigned char)s2[i]);
	}
}
/* *************
 * el qhile se pude cambiar por un if by pcesegura-c
 * el return 0 sinson iguales
/*
https://learn.microsoft.com/es-es/cpp/c-runtime-library
/reference/strncmp-wcsncmp-mbsncmp-mbsncmp-l?view=msvc-170

la función strncmp realiza una comparación ordinal de, a lo sumo, 
count (size_t) caracteres de string1 (*s1) y string2 *s2(), y devuelve un 
valor que indica la relación entre ambas subcadenas
*/

/*int main()
{
    char s1[] = "hello";
    char s2[] = "world";
	size_t  n;

    int result = ft_strncmp(s1, s2, n);

    if (result == 0) 
		{
        printf("Las cadenas son iguales.\n");
    	} 
	else if (result < 0) 
		{
        printf("La cadena s1 es menor que s2.\n");
    	} 
	else 
		{
        printf("La cadena s1 es mayor que s2.\n");
    	}
	    return 0;
}
*/
