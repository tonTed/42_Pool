#include <stdio.h>

int		main()
{


	int i;

	char	**tab;

	printf("\nTEST_1 ~ words: 0\n");
	char	str_1[]		= "                                                         ";
	char	charset_1[]	= "     ";
	tab = ft_split(str_1, charset_1);
	i = 0;
	while(tab[i])
		printf(">>> %s\n", tab[i++]);

	printf("\nTEST_2 ~ words: 1\n");
	char	str_2[]		= "  gh  ";
	char	charset_2[]	= " ";
	tab = ft_split(str_2, charset_2);
	i = 0;
	while(tab[i])
		printf(">>> %s\n", tab[i++]);

	printf("\nTEST_3 ~ words: 1\n");
	char	str_3[]		= "9JWJtUAA4S2JRmeX61rWNadzVg4gh0VS0Nkj5m";
	char	charset_3[]	= "";
	tab = ft_split(str_3, charset_3);
	i = 0;
	while(tab[i])
		printf(">>> %s\n", tab[i++]);

	printf("\nTEST_4 ~ words: 9\n");
	char	str_4[]		= "Fw68YIlUeJuW9yLz44e1y0pT2G4f1sRE       5J";
	char	charset_4[]	= "u5fker0";
	tab = ft_split(str_4, charset_4);
	i = 0;
	while(tab[i])
		printf(">>> %s\n", tab[i++]);

	printf("\nTEST_5 ~ words: 4\n");
	char	str_5[]		= "!!Salut!!Comment!!Ca!!va?";
	char	charset_5[]	= "!";
	tab = ft_split(str_5, charset_5);
	i = 0;
	while(tab[i])
		printf(">>> %s\n", tab[i++]);

	printf("\nTEST_6 ~ words: 4\n");
	char	str_6[]		= "";
	char	charset_6[]	= "";
	tab = ft_split(str_6, charset_6);
	i = 0;
	while(tab[i])
		printf(">>> %s\n", tab[i++]);

	printf("\nTEST_7 ~ words: 4\n");
	char	str_7[]		= "UloFGCWmbD0z8bNV1VvOImG9yLxMdsD";
	char	charset_7[]	= "a9";
	tab = ft_split(str_7, charset_7);
	i = 0;
	while(tab[i])
		printf(">>> %s\n", tab[i++]);

	printf("\nTEST_9 ~ words: 4\n");
	char	str_9[]		= "  gh  ";
	char	charset_9[]	= " gh";
	tab = ft_split(str_9, charset_9);
	i = 0;
	while(tab[i])
		printf(">>> %s\n", tab[i++]);

	printf("\nTEST_10 ~ words: 4\n");
	char	str_10[]		= "2c7    Rmt8    CP7yAAKri2rSNeQ4Sehpv9FeiqOjtVTWkznHq";
	char	charset_10[]	= "Mg2Z";
	tab = ft_split(str_10, charset_10);
	i = 0;
	while(tab[i])
		printf(">>> %s\n", tab[i++]);
}