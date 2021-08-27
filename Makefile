SERVER = server

CLIENT = client

SERVER_B = server_bonus

CLIENT_B = client_bonus

LIBFT = ./libft/libft.a

HEADER = includes/minitalk.h

HEADER_B = includes/*_bonus.h

CFLAGS = -Wall -Wextra -Werror

all: $(LIBFT) $(CLIENT) $(SERVER) $(HEADER)

$(SERVER): src/server.c $(HEADER)
	@gcc src/server.c $(LIBFT) -o $@
	@echo $@ ready

$(CLIENT): src/client.c $(HEADER)
	@gcc $(CFLAGS) src/client.c $(LIBFT) -o $@
	@echo $@ ready

$(SERVER_B): src/server_bonus.c $(HEADER_B)
	@gcc src/server_bonus.c $(LIBFT) -o $@
	@echo $@ ready
$(CLIENT_B): src/client_bonus.c $(HEADER_B)
	@gcc src/client_bonus.c $(LIBFT) -o $@
	@echo $@ ready

$(LIBFT):
	@make -C./libft
bonus: $(LIBFT) $(SERVER_B) $(CLIENT_B) $(HEADER_B)

clean:
	@make clean -C ./libft

fclean: clean
	rm -rf $(SERVER) $(CLIENT) $(SERVER_B) $(CLIENT_B)
	make fclean -C ./libft

re: fclean all

.PHONY: all re clean fclean bonus
