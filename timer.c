#include <stdio.h>
#include <stdint.h>
#include <unistd.h>
#include <stdlib.h>


int32_t get_time(char* str_time){
	int32_t output = atoi(str_time);
	return output;
}

void ring_bell(){
	while(1) printf("\a");
}

int main(int argc, char** argv){
	int32_t time_s;
	if (argc <= 1){
		time_s = 2;
	} else {
		time_s = get_time(argv[1]);
	}
	printf("Starting timer for %d seconds", time_s);
	fflush(stdout);
	sleep(time_s);
	ring_bell();
	return 0;
}
