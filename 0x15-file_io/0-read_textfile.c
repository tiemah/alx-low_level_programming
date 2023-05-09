#include "main.h"
/**
 * File I/O task
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t rd,wrt;
	char *buff;

	if(!filename)
		return (0);

	fd = open(filename,O_RDONLY);
	if(fd == -1)
		return(0);

	buff = malloc(sizeof(char)*(letters));
	if(!buff)
		return(0);

	rd = read(fd,buff,letters);
	wrt = write(STDOUT_FILENO,buff,rd);

	close(fd);
	free(buff);

	return wrt;
}
