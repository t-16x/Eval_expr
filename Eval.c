#incldue <unistd.h>

int main(int ac, char **av)
{

}

int		ft_atoi(char *str)
{
	int	nbr;

	nbr = 0;
	while (*str >= '0' && *str <= '9')
	{
		nbr = nbr * 10 + (*str - '0');
		str += 1;
	}
	return (nbr);
}
