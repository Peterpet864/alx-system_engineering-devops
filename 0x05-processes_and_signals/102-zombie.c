#include <stdio.h>
#include <unistd.h>

/**
 * infinite_while - waits a lot
 *
 * Return: 0
 */

int infinite_while(void)
{
	while (1)
	{
		sleep(1);
	}
	return (0);
}

/**
 * main - makes zombies
 *
 * Return: 0
 */

int main(void)
{
	int i = 0;
	pid_t c_id;

	for ( ; i < 5 ; i++)
	{
		c_id = fork();
		if (c_id == 0)
			break;
		printf("Zombie process created, PID: %d\n", c_id);
	}
	if (c_id != 0)
		infinite_while();
	return (0);
}
