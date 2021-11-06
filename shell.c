#include "shell.h"
/**
 * shell - Infinite loop that runs shell
 * @ac: Arg count
 * @av: args passed to shell at beginning of prog
 * @env: Environment
 * Return: Void
 */
void shell(int ac, char **av, char **env)
{
	char *line;
	char **args;
	int status = 1;
	char *tmp = NULL;
	char *er;
	char *filename;
	int flow;

	er = "Error";
	do {
		prompt();
		line = _getline();
		args = split_line(line);
			if (args[0] == er)
			{
				args[0] = search_cwd(filename, er);
				if (args[0] == filename)
					write(1, er, 5);
			}

		if (args[0] != er)
			status = launch_prog(args);
		free(line);
		free(args);
	} while (status);
	if (!ac)
		(void)ac;
	if (!av)
		(void)av;
	if (!env)
		(void)env;
}
