NAME	:= ouai_cest_long_la
CC		:= c++
CFLAGS	:= -Wall -Wextra -Werror -std=c++98 -MMD -MP -g3

SRCS	:= main.cpp MateriaSource.cpp Ice.cpp Cure.cpp AMateria.cpp Character.cpp
OBJDIR	:= obj
BINDIR	:= bin
OBJS 	:= $(SRCS:%.cpp=$(OBJDIR)/%.o)

all: $(BINDIR)/$(NAME)

$(BINDIR)/$(NAME): $(OBJS)
	@mkdir -p $(BINDIR)
	$(CC) $(CFLAGS) $^ -o $@
	@echo "✅ Build complete: $(NAME)"

$(OBJDIR)/%.o: %.cpp
	@mkdir -p $(OBJDIR)
	$(CC) $(CFLAGS) -c $< -o $@
	@echo "🛠️ Compiled: $<"

-include $(OBJS:.o=.d)

clean:
	rm -rf $(OBJDIR)
	@echo "🧹 Cleaned object files"

fclean: clean
	rm -rf $(BINDIR)
	@echo "🧹 Fully cleaned (bin + obj)"

re: fclean all

.PHONY:
	all clean fclean re
