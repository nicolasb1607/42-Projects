#include <stdlib.h>
int get_len(char **str)
{
	int	len;
	len = 0;

	while (str[len])
		len++;
	return (len);
}

char **tab_sep(char **dico, int nb_block)
{
	char	**tab_sep;
	int		i;
	int		j;

	j = 0;
	i = 0;
	tab_sep = malloc((get_len(dico) / 2 + 1) *sizeof(char));
	while (i <= get_len(dico))
	{
		tab_sep[i] = dico[j];
		i++;
		j+=2;
	}
	tab_sep[i + 1] = '\0';
	return (tab_sep);
}


