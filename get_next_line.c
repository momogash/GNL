#include "get_next_line.h"

size_t	find_newline(char *store)
{
	int		counter;

	counter = 0;
	while (store[counter] != '\n')
		counter++;
	return (counter);
}

int readline(char **store, char **line)
{
	char	*temp;
	int		pos;
	pos = 0;
	if (ft_strchr(*store, '\n') != NULL)
	{
		pos = find_newline(*store);

		*line = ft_strsub(*store, 0, pos);
		temp = ft_strdup(ft_strchr(*store, '\n') + 1);
		free(*store);
		*store = temp;
        if ((*store)[0] == '\0')
			ft_strdel(store);
        free(*line);
	}
	else
	{
		*line = ft_strdup(*store);
		ft_strdel(store);
	}
	return(1);
}

int get_next_line(int fd, char **line)
{
	char		stackbuff[BUFF_SIZE + 1];
	static char	*store;
	long        bytes;
	char		*temp;

	if (store == NULL)
		store = ft_strnew(0);
	while ((bytes = read(fd, stackbuff, BUFF_SIZE)) > 0)
	{
		stackbuff[bytes] = '\0';
		temp = ft_strjoin(store, stackbuff);
		free(store);
		store = temp;
	}
	if	(bytes < 0 )
		return(long)(-1);
	else if	(bytes == 0 && ft_strlen(store) == 0)
		return(int)(0);
	else
		return	(long)(readline(&store, line));
}
