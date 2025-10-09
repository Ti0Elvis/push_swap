# ================================ COLORS ================================== #
RESET		=	\033[0m
RED			=	\033[31m
GREEN		=	\033[32m
YELLOW		=	\033[33m
BLUE		=	\033[34m
MAGENTA		=	\033[35m
CYAN		=	\033[36m
WHITE		=	\033[37m
BOLD		=	\033[1m
BLACK 		=	\033[30m
ITALIC		=	\033[3m

# =============================== PROJECT =================================== #
NAME		=	push_swap
COMPILER	=	gcc
FLAGS		=	-Wall -Wextra -Werror
OBJS_DIR	=	objs

# =============================== LIBRARIES ================================= #
LIBFT_DIR	=	./src/libft
LIBFT_LIB	=	$(LIBFT_DIR)/libft.a

# ================================ FILES ==================================== #
C_FILES		=	main.c \
				./src/utils.c \
				./src/args_validation.c \
				./src/init_stack.c \
				./src/free_memory.c \
				./src/push_operations.c \
				./src/swap_operations.c \
				./src/rotate_operations.c \
				./src/reverse_rotate_operations.c \
				./src/stack_utils.c \
				./src/radix_sort.c \
				./src/sort_stack.c

OBJS		=	$(patsubst %.c,$(OBJS_DIR)/%.o,$(C_FILES))

# =============================== TARGETS =================================== #
all: $(LIBFT_LIB) $(NAME)

$(LIBFT_LIB):
	@printf "$(BLUE)$(BOLD)📚 Building libft...$(RESET)\n"
	@make -C $(LIBFT_DIR)
	@printf "$(GREEN)$(BOLD)✅ libft compiled successfully!$(RESET)\n"

$(NAME): $(OBJS) $(LIBFT_LIB)
	@printf "$(CYAN)$(BOLD)🔗 Linking $(NAME)...$(RESET)\n"
	@$(COMPILER) $(FLAGS) $(OBJS) $(LIBFT_LIB) -o $(NAME)
	@printf "$(GREEN)$(BOLD)✅ $(NAME) successfully compiled!$(RESET)\n\n"
	@printf "$(BLACK)$(BOLD)\n"
	@printf "            ________o8A888888o_                     \n"
	@printf "        _o888888888888K_1888888o                    \n"
	@printf "                  ~~~+8888888888o                   \n"
	@printf "                      ~8888888888                   \n"
	@printf "                      o88888888888                  \n"
	@printf "                     o8888888888888                 \n"
	@printf "                   _8888888888888888                \n"
	@printf "                  o888888888888888888_              \n"
	@printf "                 o88888888888888888888_             \n"
	@printf "                _8888888888888888888888_            \n"
	@printf "                888888888888888888888888_           \n"
	@printf "                8888888888888888888888888           \n"
	@printf "                88888888888888888888888888          \n"
	@printf "                88888888888888888888888888          \n"
	@printf "                888888888888888888888888888         \n"
	@printf "                ~88888888888888888888888888_        \n"
	@printf "                 488888888888888888888888888        \n"
	@printf "                  888888888888888888888888888       \n"
	@printf "                   888888888888888888888888888_     \n"
	@printf "                   ~8888888888888888888888888888    \n"
	@printf "                     +88888888888888888888~~~~~     \n"
	@printf "                      ~=888888888888888888o         \n"
	@printf "               _=oooooooo888888888888888888         \n"
	@printf "                _o88=8888==~88888888===8888         \n"
	@printf "                ~   =~~ _o88888888=      ~~~        \n"
	@printf "                        ~ o8=~88=~                  \n"
	@printf "$(YELLOW)    🐧 TioElvis says: Great job! Your program is ready! 🐧$(RESET)\n\n"

$(OBJS_DIR)/%.o: %.c | $(OBJS_DIR)
	@mkdir -p $(dir $@)
	@printf "$(YELLOW)🔨 Compiling $<...$(RESET)\n"
	@$(COMPILER) $(FLAGS) -I$(LIBFT_DIR) -c $< -o $@

$(OBJS_DIR):
	@mkdir -p $(OBJS_DIR)
	@printf "$(BLUE)📁 Creating objects directory...$(RESET)\n"

clean:
	@printf "$(RED)🧹 Cleaning object files...$(RESET)\n"
	@rm -rf $(OBJS_DIR)
	@make clean -C $(LIBFT_DIR)
	@printf "$(GREEN)✨ Clean completed!$(RESET)\n"

fclean: clean
	@printf "$(RED)🗑️  Removing $(NAME)...$(RESET)\n"
	@rm -f $(NAME)
	@make fclean -C $(LIBFT_DIR)
	@printf "$(GREEN)✨ Full clean completed!$(RESET)\n"

re: fclean all

help:
	@printf "$(CYAN)$(BOLD)📖 Available targets:$(RESET)\n"
	@printf "  $(GREEN)all$(RESET)     - Build the project (including libft)\n"
	@printf "  $(GREEN)clean$(RESET)   - Remove object files\n"
	@printf "  $(GREEN)fclean$(RESET)  - Remove object files and executable\n"
	@printf "  $(GREEN)re$(RESET)      - Rebuild everything from scratch\n"
	@printf "  $(GREEN)help$(RESET)    - Show this help message\n"

.PHONY: all clean fclean re help
