/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jadiaz-b <jadiaz-b@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 22:48:56 by jadiaz-b          #+#    #+#             */
/*   Updated: 2024/02/04 18:45:54 by jadiaz-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char *ft_substr(char const *s, unsigned int start, size_t len)
{
	unsigned int j;
	size_t	i;
	char*	sub;

	j = 0;
	i = 0;
	if (!s)
		return (NULL);
	if (!(sub = (char*)malloc(sizeof(char) * (len + 1))))
	  return (NULL);
	while (s[i])
	{
		if (i >= start && j < len)
		{
			sub[j] = s[i];
			j++;
		}
		i++;
	}
	sub[j] = '\0';
	return (sub);
}

/*
int main()
{
	char* sub;	
	sub = ft_substr("!Hola 42l!", 7, 2);
	printf("%s\n", sub);

		return 0;
}
 * valor devuelto
La substring resultante.
NULL si falla la reserva de memoria. malloc
ft_strjoin
char *ft_strjoin(char const *s1, char const *s2); -
s1: La primera string.
s2: La string a añadir a ’s1’.
La nueva string.
NULL si falla la reserva de memoria. malloc
  
Parámetros
s: La string desde la que crear la substring. start: El índice del 
caracter en ’s’ desde el que empezar la substring.
len: La longitud máxima de la substring.
 
Descripción
Reserva (con malloc(3)) y devuelve una substring de la string ’s’.
La substring empieza desde el índice ’start’ 
y tiene una longitud máxima ’len’.*/
