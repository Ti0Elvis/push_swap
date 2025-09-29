# ================================ COLORS ================================== #
RESET		= \033[0m
RED			= \033[31m
GREEN		= \033[32m
YELLOW		= \033[33m
BLUE		= \033[34m
MAGENTA		= \033[35m
CYAN		= \033[36m
WHITE		= \033[37m
BOLD		= \033[1m
BLACK 		= \033[30m
ITALIC		= \033[3m

# =============================== PROJECT =================================== #
NAME		= libft.a
COMPILER	= gcc
FLAGS		= -Wall -Wextra -Werror
OBJS_DIR	= objs

# ================================ FILES ==================================== #
C_FILES		=	ft_atoi.c \
				ft_bzero.c \
				ft_calloc.c \
				ft_isalnum.c \
				ft_isalpha.c \
				ft_isascii.c \
				ft_isdigit.c \
				ft_isprint.c \
				ft_itoa.c \
				ft_lstadd_back.c \
				ft_lstadd_front.c \
				ft_lstclear.c \
				ft_lstdelone.c \
				ft_lstiter.c \
				ft_lstlast.c \
				ft_lstmap.c \
				ft_lstnew.c \
				ft_lstsize.c \
				ft_memchr.c \
				ft_memcmp.c \
				ft_memcpy.c \
				ft_memmove.c \
				ft_memset.c \
				ft_putchar_fd.c \
				ft_putendl_fd.c \
				ft_putnbr_fd.c \
				ft_putstr_fd.c \
				ft_split.c \
				ft_strchr.c \
				ft_strdup.c \
				ft_striteri.c \
				ft_strjoin.c \
				ft_strlcat.c \
				ft_strlcpy.c \
				ft_strlen.c \
				ft_strmapi.c \
				ft_strncmp.c \
				ft_strnstr.c \
				ft_strrchr.c \
				ft_strtrim.c \
				ft_substr.c \
				ft_tolower.c \
				ft_toupper.c \
				./ft_printf/ft_printf.c \
				./ft_printf/ft_putchar.c \
				./ft_printf/ft_putfn.c \
				./ft_printf/ft_puthex_lowercase.c \
				./ft_printf/ft_puthex_uppercase.c \
				./ft_printf/ft_putnbr.c \
				./ft_printf/ft_putpointer.c \
				./ft_printf/ft_putstr.c \
				./get_next_line/get_next_line.c \
				./get_next_line/get_next_line_utils.c



OBJS		= $(patsubst %.c,$(OBJS_DIR)/%.o,$(C_FILES))

# =============================== TARGETS =================================== #
all: $(NAME)

$(NAME): $(OBJS)
	@printf "$(CYAN)$(BOLD)📚 Creating library $(NAME)...$(RESET)\n"
	@ar rcs $(NAME) $(OBJS)
	@printf "$(GREEN)$(BOLD)✅ $(NAME) successfully compiled!$(RESET)\n\n"
	@printf "$(MAGENTA)$(BOLD)\n"
	@printf "        ██╗     ██╗██████╗ ███████╗████████╗\n"
	@printf "        ██║     ██║██╔══██╗██╔════╝╚══██╔══╝\n"
	@printf "        ██║     ██║██████╔╝█████╗     ██║   \n"
	@printf "        ██║     ██║██╔══██╗██╔══╝     ██║   \n"
	@printf "        ███████╗██║██████╔╝██║        ██║   \n"
	@printf "        ╚══════╝╚═╝╚═════╝ ╚═╝        ╚═╝   \n"
	@printf "$(YELLOW)    📖 C library is ready to use! 📖$(RESET)\n\n"

$(OBJS_DIR)/%.o: %.c | $(OBJS_DIR)
	@mkdir -p $(dir $@)
	@printf "$(YELLOW)🔨 Compiling $<...$(RESET)\n"
	@$(COMPILER) $(FLAGS) -c $< -o $@

$(OBJS_DIR):
	@mkdir -p $(OBJS_DIR)
	@printf "$(BLUE)📁 Creating objects directory...$(RESET)\n"

clean:
	@printf "$(RED)🧹 Cleaning object files...$(RESET)\n"
	@rm -rf $(OBJS_DIR)
	@printf "$(GREEN)✨ Clean completed!$(RESET)\n"

fclean: clean
	@printf "$(RED)🗑️  Removing $(NAME)...$(RESET)\n"
	@rm -f $(NAME)
	@printf "$(GREEN)✨ Full clean completed!$(RESET)\n"

re: fclean all

help:
	@printf "$(CYAN)$(BOLD)📖 Available targets:$(RESET)\n"
	@printf "  $(GREEN)all$(RESET)     - Build the library\n"
	@printf "  $(GREEN)clean$(RESET)   - Remove object files\n"
	@printf "  $(GREEN)fclean$(RESET)  - Remove object files and library\n"
	@printf "  $(GREEN)re$(RESET)      - Rebuild everything from scratch\n"
	@printf "  $(GREEN)help$(RESET)    - Show this help message\n"

.PHONY: all clean fclean re help
