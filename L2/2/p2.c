#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include<sys/stat.h>
#include <unistd.h>
int main(int argc, char *argv[])
{
	int fdd,i=2,fd;
	unsigned char buffer[20];
	ssize_t nr=0;
	
	fdd=open(argv[1], O_WRONLY | O_CREAT |O_TRUNC, S_IRUSR | S_IWUSR);
	if(fdd==-1)
	{
		perror(argv[1]);
		exit(EXIT_FAILURE);
	}
	
	for(i=2;i<argc;i++)
	{
		fd=open(argv[i], O_RDONLY | O_FSYNC);
		if(fd==-1)
		{
			perror(argv[i]);
			exit(EXIT_FAILURE);
		}
	
	
	
		while((nr=read(fd,buffer,20))>0)
		{
			if(write(fdd,buffer,nr)!=nr)
			{
				perror("eroare");
				exit(EXIT_FAILURE);
			}
		}
	
		close(fd);
			write(fdd, "\n", 1);
        }
		
	
	close(fdd);
	return 0;
	 
}
