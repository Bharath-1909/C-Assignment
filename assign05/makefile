TARGET=q3
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
	rm $(TARGET) $(COBJS)

phony: 
	run clean
