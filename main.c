#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>
#include <signal.h>

#include "skip_list.h"

typedef struct {
	const char *ip_;
	int hash_code_;
}ip_hash_tuple;

static ip_hash_tuple tuple[] = {
	{"192.168.1.221", 12},
	{"192.168.1.222", 24},
	{"192.168.1.223", 36},
	{"192.168.1.224", 48},
	{"192.168.1.225", 60}
};

static int b_break = 0;
static void sig_int_handler(int signo) { 
	(void)signo;
	b_break = 1; 
}

int main(int argc, char *argv[])
{
	srand(time(NULL));
	signal(SIGINT, sig_int_handler);

	skip_list *sl = create_skip_list(12);
	if (!sl) {
		printf("create skip list err.\n");
		return -1;
	}

	int i;
	for (i = 0; i < sizeof(tuple) / sizeof(tuple[0]); ++i)
		insert_2_skil_list(sl, tuple[i].hash_code_, tuple[i].ip_);

	show_skip_list(sl);

	while (!b_break) {
		int key_hash_code = rand() % 60 + 1;
		printf("key hash code: %-3d  dispatch to IP: %s\n", 
				key_hash_code, 
				get_ip_from_skip_list(sl, key_hash_code));

		sleep(1);
	}
	
	destroy_skip_list(sl);
	return 0;
}
