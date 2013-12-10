src=$(wildcard *.c)
obj=$(patsubst %.c, %.o, $(src))
cc=gcc
target=consitent_hash

$(target):$(obj)
	$(cc) -o $@ $(obj)

%.o:%.c
	$(cc) -Wall -c $< -o $@

.PHONY:clean tag
clean:
	-rm -f $(target) $(obj)
tag:
	ctags -R *
