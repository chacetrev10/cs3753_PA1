#include <linux/unistd.h>
#include <sys/syscall.h>
#include <sys/types.h>
#include <stdio.h>

int main (int argc, char argv[]){
		int res=0;
		syscall(333, 3,5, &res);
		printf("result is %d\n", res);
		return 0;
}
