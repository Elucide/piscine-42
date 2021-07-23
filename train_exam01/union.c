#include <unistd.h>
int ft_strlen(char *str)
{
	int i = 0;
	while (str[i])
		i++;
	return (i);
}

void ft_union(char *str1, char *str2)
{
	char tab[255];
	int i = 0;
	int j = 0;

	while (i < 256)
	{
		i++;
		tab[i] = i;
	}
	i = 0;
	while (tab[i])
	{
		while (str1[j] || str2[j])
		{
			if (str1[j] == tab[i] || str2[j] == tab[i])
			{
				write(1, &tab[i],1);
			}
		}
	}
}
int main(void)
{
	ft_union("bonjour", "coucou");
}
