#include "includes/ft.h"

int ft_display_file(char *path)
{
	char	buf[2048];
	int		fd; 
	int len; 

	if ((fd = open(path, O_RDONLY)) < 0)
		return(-1);
	if((len = read(fd, buf, 2048)) > 0) 
		write(1, buf, len);
	close(fd);
	if (len < 0)
		return(-1);
	else
		return(0);
}

int main(int ac, char** av)
{
    if (ac < 2)
        ft_putstr("File name missing.\n", STDERR_FILENO);
    else if (ac > 2 )
        ft_putstr("Too many arguments.\n", STDERR_FILENO);
    if (ft_display_file(av[1]) == -1)
        ft_putstr("Cannot read file.\n", STDERR_FILENO);  
    return(0);
}
