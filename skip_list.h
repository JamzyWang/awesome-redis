#ifndef SKIP_LIST_H_
#define SKIP_LIST_H_

typedef struct skip_list_node{
	int hash_code_;
	char ip_[16];
	struct skip_list_node **forward_;
}skip_list_node;

typedef struct skip_list{
	int size_;
	int max_level_;
	skip_list_node header_;
}skip_list;

skip_list* create_skip_list(int max_level);
int destroy_skip_list(skip_list *sl);
int insert_2_skil_list(skip_list *sl, int hash_code, const char *ip);
const char* get_ip_from_skip_list(skip_list *sl, int key_hash_code);

void show_skip_list(skip_list *sl);

#endif
