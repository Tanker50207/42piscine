void *ft_print_memory(void *addr, unsigned int size);

int	main(void)
{
	char test[] = "éb9yv0123p4i67â";
	//char test[] = "";
	ft_print_memory(&test, 20);
	return (0);
}