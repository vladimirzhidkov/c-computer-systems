EXEC := link.out
OBJS := main.o

DEBUG_FLAGS := -g

$(EXEC): $(OBJS)
	gcc $(OBJS) -o $(EXEC)

%.o: %.c
	gcc $(DEBUG_FLAGS) -c $< -o $@

clean:
	rm -f $(OBJS) $(EXEC)

run:
	./$(EXEC)
