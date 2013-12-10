#include "skip_list.h"

#include <string.h>
#include <stdlib.h>
#include <stdio.h>

static int rand_new_lvl() {
	int lvl = 1;
	while ((rand() & 0xffff) <= (0xffff >> 2))
		++lvl;
	return lvl;
}

skip_list* create_skip_list(int max_level /* = 12 */) {
	skip_list *sl = (skip_list*)malloc(sizeof(skip_list)); 
	if (sl) {
		sl->size_ = 0;
		sl->max_level_ = max_level;
		sl->header_.forward_	= (skip_list_node**)malloc(sizeof(void*) * max_level);
		if (!sl->header_.forward_) {
			free(sl);
			sl = NULL;
		}
		int i;
		for (i = 0; i < max_level; ++i) {
			sl->header_.forward_[i] = NULL;
		}
	}

	return sl;
}

int destroy_skip_list(skip_list *sl) {
	if (!sl)
		return -1;
	
	skip_list_node **itor = &(sl->header_.forward_[0]);
	while (*itor) {
		skip_list_node *cur = *itor;
		*itor = cur->forward_[0];
		free(cur->forward_);
	}

	free(sl->header_.forward_);
	free(sl);

	return 0;
}

int insert_2_skil_list(skip_list *sl, int hash_code, const char *ip) {
	if (!sl || !ip)
		return -1;

	int level = sl->max_level_;
	skip_list_node **update = (skip_list_node**)malloc(sizeof(void*) * level);
	if (!update)
		return -1;
	
	skip_list_node *cur = &sl->header_;
	while (--level >= 0) {
		while (cur->forward_[level] && cur->forward_[level]->hash_code_ < hash_code)
			cur = cur->forward_[level];

		update[level] = cur;
	}

	// had exist
	if (update[0] && update[0]->hash_code_ == hash_code)
		return -1;

	skip_list_node *new_node = (skip_list_node*)malloc(sizeof(skip_list_node));
	if (!new_node)
		return -1;
	new_node->hash_code_ = hash_code;
	strncpy(new_node->ip_, ip, sizeof(new_node->ip_));
	int new_level = rand_new_lvl();
	new_level = (new_level > sl->max_level_) ? sl->max_level_ : new_level;
	new_node->forward_ = (skip_list_node**)malloc(sizeof(void*) * new_level);
	level = new_level;
	while (--level >= 0) {
		new_node->forward_[level] = update[level]->forward_[level];
		update[level]->forward_[level] = new_node;
	}
	
	++sl->size_;
	return 0;
}
const char* get_ip_from_skip_list(skip_list *sl, int key_hash_code) {
	if (!sl)
		return NULL;

	skip_list_node *cur = sl->header_.forward_[0];
	while (cur && cur->hash_code_ < key_hash_code)
		cur = cur->forward_[0];

	return cur ? cur->ip_ : NULL;
}
void show_skip_list(skip_list *sl) {
	if (!sl || sl->size_ == 0)
		return;
	
	int cnt = 0;
	skip_list_node **itor = &(sl->header_.forward_[0]);	
	while (*itor) {
		skip_list_node *cur = *itor;
		printf("No: %-3d   HashCode: %-7d   IP: %s\n", ++cnt, cur->hash_code_, cur->ip_);
		itor = &(cur->forward_[0]);
	}
}
