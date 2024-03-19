
TARGET=q5b
CSRCS=$(TARGET).c
CSRCS+=Q3.c
COBJS=$(CSRCS:.c=.o)

cc=gcc

$(TARGET) : $(COBJS)
	$(cc) -o $@ $^
%.o : %.c
	$(cc) -c $<
run:
	./$(TARGET)

clean:
	rm $(TARGET) $(COBJS)

PHONY: RUN CLEAN
