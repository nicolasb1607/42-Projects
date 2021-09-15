 #include <unistd.h>
int ft_strlen(char *message)
{
    int len; 

    len = 0;
    while(message[len])
        len++;
    return(len);
}
void ft_putstr(char *message, int fd)
{
    int len; 

    len = ft_strlen(message);
    write(fd, message, len);
}