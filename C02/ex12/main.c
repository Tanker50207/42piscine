void *ft_print_memory(void *addr, unsigned int size);

int	main(void)
{
	char test[] = "Bonjour les aminches\n\n\nc\n est fou\ntout\nce qu on peut faire avec \n\n\nprint_memory\n\n\n\nlol\nlol\n ";
	//char test[] = "";
	ft_print_memory(&test, 99);
	return (0);
}