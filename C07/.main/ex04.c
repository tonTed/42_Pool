#include <stdio.h>

int main()
{
	// TEST_1
		char *nbr_1 		= "-10000000000000000000000000000000";
		char *base_from_1 	= "01";
		char *base_to_1		= "0123456789";
		char *new_nbr_1;
		new_nbr_1 = ft_convert_base(nbr_1, base_from_1, base_to_1);
		printf("\nTEST_1 - nbr: %s | base_from: %s | base_to: %s", nbr_1, base_from_1, base_to_1);
		printf("\n  |-> new_nbr: %s \n\n", new_nbr_1);
	
	// TEST_2
		char *nbr_2 		= "-2147483648";
		char *base_from_2 	= "0123456789";
		char *base_to_2		= "01";
		char *new_nbr_2;
		new_nbr_2 = ft_convert_base(nbr_2, base_from_2, base_to_2);
		printf("\nTEST_2 - nbr: %s | base_from: %s | base_to: %s", nbr_2, base_from_2, base_to_2);
		printf("\n  |-> new_nbr: %s \n\n", new_nbr_2);
	
	// TEST_3
		char *nbr_3 		= "2147483647";
		char *base_from_3 	= "0123456789";
		char *base_to_3		= "0123456789ABCDEF";
		char *new_nbr_3;
		new_nbr_3 = ft_convert_base(nbr_3, base_from_3, base_to_3);
		printf("\nTEST_3 - nbr: %s | base_from: %s | base_to: %s", nbr_3, base_from_3, base_to_3);
		printf("\n  |-> new_nbr: %s \n\n", new_nbr_3);
	
	// TEST_4
		char *nbr_4 		= "2147483647";
		char *base_from_4 	= "0123456789";
		char *base_to_4		= "kiota";
		char *new_nbr_4;
		new_nbr_4 = ft_convert_base(nbr_4, base_from_4, base_to_4);
		printf("\nTEST_4 - nbr: %s | base_from: %s | base_to: %s", nbr_4, base_from_4, base_to_4);
		printf("\n  |-> new_nbr: %s \n\n", new_nbr_4);
	
	// TEST_5
		char *nbr_5 		= "2147483647";
		char *base_from_5 	= "0123456789";
		char *base_to_5		= "0123456789ABCDEF";
		char *new_nbr_5;
		new_nbr_5 = ft_convert_base(nbr_5, base_from_5, base_to_5);
		printf("\nTEST_5 - nbr: %s | base_from: %s | base_to: %s", nbr_5, base_from_5, base_to_5);
		printf("\n  |-> new_nbr: %s \n\n", new_nbr_5);
	
	// TEST_6
		char *nbr_6 		= "2147483647";
		char *base_from_6 	= " 0123456789";
		char *base_to_6		= "0123456789ABCDEF";
		char *new_nbr_6;
		new_nbr_6 = ft_convert_base(nbr_6, base_from_6, base_to_6);
		printf("\nTEST_6 - nbr: %s | base_from: %s | base_to: %s", nbr_6, base_from_6, base_to_6);
		printf("\n  |-> new_nbr: %s \n\n", new_nbr_6);
	
	// TEST_7
		char *nbr_7 		= "2147483647";
		char *base_from_7 	= "0123456789";
		char *base_to_7		= "0123456789ABCDEF ";
		char *new_nbr_7;
		new_nbr_7 = ft_convert_base(nbr_7, base_from_7, base_to_7);
		printf("\nTEST_7 - nbr: %s | base_from: %s | base_to: %s", nbr_7, base_from_7, base_to_7);
		printf("\n  |-> new_nbr: %s \n\n", new_nbr_7);
	
	// TEST_8
		char *nbr_8 		= " \t++-+--+-2147483647";
		char *base_from_8 	= "0123456789";
		char *base_to_8		= "0123456789ABCDEF";
		char *new_nbr_8;
		new_nbr_8 = ft_convert_base(nbr_8, base_from_8, base_to_8);
		printf("\nTEST_8 - nbr: %s | base_from: %s | base_to: %s", nbr_8, base_from_8, base_to_8);
		printf("\n  |-> new_nbr: %s \n\n", new_nbr_8);
	
	// TEST_9
		char *nbr_9 		= "\t++-+- -+-2147483647";
		char *base_from_9 	= "0123456789";
		char *base_to_9		= "0123456789ABCDEF";
		char *new_nbr_9;
		new_nbr_9 = ft_convert_base(nbr_9, base_from_9, base_to_9);
		printf("\nTEST_9 - nbr: %s | base_from: %s | base_to: %s", nbr_9, base_from_9, base_to_9);
		printf("\n  |-> new_nbr: %s \n\n", new_nbr_9);
	
	// TEST_10
		char *nbr_10 		= "\t++-+-ittaaootatakao";
		char *base_from_10 	= "kiato";
		char *base_to_10	= "0123456789ABCDEF";
		char *new_nbr_10;
		new_nbr_10 = ft_convert_base(nbr_10, base_from_10, base_to_10);
		printf("\nTEST_10 - nbr: %s | base_from: %s | base_to: %s", nbr_10, base_from_10, base_to_10);
		printf("\n  |-> new_nbr: %s \n\n", new_nbr_10);
	
	// TEST_11
		char *nbr_11 		= "\t++-+-ittaaootatakao";
		char *base_from_11 	= "kiato";
		char *base_to_11	= "01";
		char *new_nbr_11;
		new_nbr_11 = ft_convert_base(nbr_11, base_from_11, base_to_11);
		printf("\nTEST_11 - nbr: %s | base_from: %s | base_to: %s", nbr_11, base_from_11, base_to_11);
		printf("\n  |-> new_nbr: %s \n\n", new_nbr_11);
	
	// TEST_12
		char *nbr_12 		= new_nbr_11;
		char *base_from_12 	= base_to_11;
		char *base_to_12	= "ted";
		char *new_nbr_12;
		new_nbr_12 = ft_convert_base(nbr_12, base_from_12, base_to_12);
		printf("\nTEST_12 - nbr: %s | base_from: %s | base_to: %s", nbr_12, base_from_12, base_to_12);
		printf("\n  |-> new_nbr: %s \n\n", new_nbr_12);
	
	// TEST_13
		char *nbr_13 		= new_nbr_12;
		char *base_from_13 	= base_to_12;
		char *base_to_13	= "0123456789ABCDEF";
		char *new_nbr_13;
		new_nbr_13 = ft_convert_base(nbr_13, base_from_13, base_to_13);
		printf("\nTEST_13 - nbr: %s | base_from: %s | base_to: %s", nbr_13, base_from_13, base_to_13);
		printf("\n  |-> new_nbr: %s \n\n", new_nbr_13);
	
	// TEST_14
		char *nbr_14 		= new_nbr_13;
		char *base_from_14 	= base_to_13;
		char *base_to_14	= "0123456789";
		char *new_nbr_14;
		new_nbr_14 = ft_convert_base(nbr_14, base_from_14, base_to_14);
		printf("\nTEST_14 - nbr: %s | base_from: %s | base_to: %s", nbr_14, base_from_14, base_to_14);
		printf("\n  |-> new_nbr: %s \n\n", new_nbr_14);

	return 0;
}