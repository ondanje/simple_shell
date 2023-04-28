#include "main.h"
/**
 * freeList - LDLs is free
 * @head: head
 */
void freeList(LDL *head)
{
	LDL *temp;

	while (head != NULL)
	{
		temp = head;
		head = head->next;
		free(temp->str);
		free(temp);
	}
}
/**
 * addNode - node is added
 * @head_ref: head_ref
 * @str: str
 */
void addNode(LDL **head_ref, char *str)
{
	LDL *new_node = (LDL *)malloc(sizeof(LDL));

	new_node->str = str;
	new_node->next = *head_ref;
	*head_ref = new_node;
}
/**
 * path_list - pathlist
 * Return: return
 */
LDL *path_list(void)
{
	LDL *head = NULL;
	char *path = getenv("PATH");
	char *path_copy = _strdup(path);
	LDL *node;
	char *token;

	if (!path_copy)
	{
		perror("malloc failure");
		return (NULL);
	}
	token = strtok(path_copy, ":");

	while (token != NULL)
	{
		node = malloc(sizeof(LDL));
		if (!node)
		{
			perror("malloc failure");
			freeList(head);
			free(path_copy);
			return (NULL);
		}

		node->str = _strdup(token);
		node->next = head;
		head = node;

		token = strtok(NULL, ":");
	}
	free(path_copy);

	return (head);
}
/**
 * find_executable - checker for occ of file
 * @command: command
 * @path_list: ls
 * Return: return
 */
char *find_executable(char *command, LDL *path_list)
{
	char *executable_path = NULL;
	char *path = NULL;
	int command_len = stringlength(command);
	int path_len;
	int new_len;
	char *new_path;

	while (path_list != NULL)
	{
		path = path_list->str;
		path_len = stringlength(path);
		new_len = path_len + command_len + 2;
		new_path = malloc(new_len * sizeof(char));
		if (new_path == NULL)
		{
			perror("malloc error");
			exit(1);
		}
		_strcpy(new_path, path);
		_strcat(new_path, "/");
		_strcat(new_path, command);
		if (access(new_path, X_OK) == 0)
		{
			executable_path = new_path;
		break;
		}
		free(new_path);
		path_list = path_list->next;
	}
	return (executable_path);
}
/**
 * _getenv - name
 * @name: name
 * Return: return
 */
char *_getenv(const char *name)
{
	int i, len;
	char *env_val;

	len = stringlength(name);

	for (i = 0; environ[i] != NULL; i++)
	{
		if (_strncmp(name, environ[i], len) == 0 && environ[i][len] == '=')
		{
			env_val = &environ[i][len + 1];

	return (env_val);
		}
	}

	return (NULL);
}
