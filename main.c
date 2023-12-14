#include "monty.h"
stack_t *top = NULL;
/**
 * main - function for monty program
 * @arc: num of arguments
 * @arv: opcode file
 * Return: 0
 */
int main(int argc, char **argv)
{
	if (argc != 2)
	{
		fprintf(stderr, "USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}

	file_handle(argv[1]);
	return (0);
}
