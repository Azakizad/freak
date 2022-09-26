FRAEMWORKS=-framework OpenGL -framework AppKit
CFLAGS= -Wall -Werror -Wextra
NAME=Freak
SRC=*.c
INCLUDES= minilibx_macos/libmlx.a

all:
	@make -C minilibx_macos/ all
	gcc $(SRC) -o $(NAME) $(CFLAGS) -I . $(INCLUDES) $(FRAEMWORKS)

clean:
	@make -C minilibx_macos/ clean
	/bin/rm -f *.o