void	ft_putstr_non_printable(char *str);

int main(void)
{
	char str[] = "bonj\nour les copains";

	ft_putstr_non_printable(str);
	return (0);
}
