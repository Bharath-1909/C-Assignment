TARGET=q7


CSRCS=$(TARGET).c
CSRCS+=q2.c
COBJS=$(CSRCS:.c=.o)
cc=gcc
CFLAG=
LDFLAG=

$(TARGET):$(COBJS)
	$(cc) $(LDFLAG) -o $@ $^
%.o: %.c
	$(cc) $(CFLAG) -c $<

run:
	./$(TARGET)

clean :
	rm -r  $(TARGET) $(COBJS)

phony: 
	run clean
