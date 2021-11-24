/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nburat-d <nburat-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/20 17:37:56 by nburat-d          #+#    #+#             */
/*   Updated: 2021/11/24 16:39:15 by nburat-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

 /*
The calloc() function allocates memory for an array of nmemb elements of size bytes each and returns a pointer to the allocated
memory.   The  memory is set to zero.  If nmemb or size is 0, then calloc() returns either NULL, or a unique pointer value that
can later be successfully passed to free().  If the multiplication of nmemb and size would result  in  integer  overflow,  then
calloc()  returns an error.  By contrast, an integer overflow would not be detected in the following call to malloc(), with the
result that an incorrectly sized block of memory would be allocated:

malloc(nmemb * size);

The  malloc() and calloc() functions return a pointer to the allocated memory, which is suitably aligned for any built-in type.
On error, these functions return NULL.  NULL may also be returned by a successful call to malloc() with a size of zero, or by a
successful call to calloc() with nmemb or size equal to zero.
*/
void	*ft_calloc(size_t nmemb, size_t size)
{
	int	*ptr;

	if (nmemb == 0)
		return (NULL);
	ptr = malloc(nmemb * sizeof(size));
	if (!ptr)
		return (NULL);
	while (nmemb-- > 0)
		*ptr++ = 0;
	return (ptr);
}
