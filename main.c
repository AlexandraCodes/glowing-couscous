/*
 * 	return  1 --> one line has been read
 * 	return  0 --> EOF has been reached
 *	return -1 --> an error happened
 * */

int	main(int ac, char **argv)
{
    char	*line;
    int	fd;

    fd = open(argv[1], O_RDONLY);
    while (ac)
        break;
    while (get_next_line(fd, &line) > 0)
        printf("\033[1;31m the line is --> %s\033[0m \n", line);

    return (0);
}
