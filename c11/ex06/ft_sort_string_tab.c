int	ft_strcmp(char *s1, char *s2)
{
	int	i;
	int	x;

	i = 0;
	while (s1[i] == s2[i] && s1[i] && s2[i])
		i++;
	x = s1[i] - s2[i];
	return (x);
}
void	ft_swap(char *s1, char *s2)
{
	char *pt;

	pt = s1;
	s1 = s2;
	s2 = pt;

}

void ft_sort_tab(char **tab, int size)
{
	int i; 
	int j; 

	i = 1; 
	j = 0;
	if (size < 2)
		return ; 
	else
	{


	}
}	

void	ft_sort_string_tab(char **tab)
{
	int	i; 
	int	j;
	i = 1;
	j = 0;


}
