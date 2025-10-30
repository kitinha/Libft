int ft_strlen(char *s)
{
	int i = 0;
	while (s[i])
		i++;
	return (i);
}

int	main(void)
{
	char *s1 = "hello!!";
	
	(void)s1;
	char s2[] = "hello";	

	ft_strlen(s2);

}