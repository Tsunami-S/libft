NAME = libft.a
MY_LIBFT = mylibft.a
FT_CTYPE = ft_ctype
FT_STDIO = ft_stdio
FT_STRING = ft_string
FT_STDLIB = ft_stdlib
FT_LIST = ft_list
FT_UTILS = ft_utils

# コンパイラとフラグの設定
CC = cc
AR = ar rc
RM = rm -rf
WFLAGS = -Wall -Wextra -Werror
IFLAGS = -I includes

# ソースファイルの定義
SRCS_CTYPE = $(addprefix $(FT_CTYPE)/, ft_isalnum.c ft_isascii.c ft_islower.c ft_isspace.c ft_tolower.c ft_isalpha.c ft_isdigit.c ft_isprint.c ft_isupper.c ft_toupper.c)
SRCS_STDIO = $(addprefix $(FT_STDIO)/, ft_putchar_fd.c ft_putendl_fd.c ft_putnbr_fd.c ft_putstr_fd.c)
SRCS_STDLIB = $(addprefix $(FT_STDLIB)/, ft_abs.c ft_atoi.c ft_calloc.c ft_itoa.c)
SRCS_STRING = $(addprefix $(FT_STRING)/, ft_bzero.c ft_memcpy.c ft_split.c ft_striteri.c ft_strlcpy.c ft_strncmp.c ft_strtrim.c ft_memchr.c ft_memmove.c ft_strchr.c ft_strjoin.c ft_strlen.c ft_strnstr.c ft_substr.c ft_memcmp.c ft_memset.c ft_strdup.c ft_strlcat.c  ft_strmapi.c ft_strrchr.c)
SRCS_LIST = $(addprefix $(FT_LIST)/, ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c ft_lstadd_back.c ft_lstdelone.c ft_lstclear.c ft_lstiter.c ft_lstmap.c)
SRCS_UTILS = $(addprefix $(FT_UTILS)/, ft_rev_int_tab.c ft_sort_int_tab.c ft_swap.c)

# オブジェクトファイルの定義
OBJS_ALL = $(SRCS_CTYPE:.c=.o) $(SRCS_STDIO:.c=.o) $(SRCS_STDLIB:.c=.o) $(SRCS_STRING:.c=.o) $(SRCS_LIST:.c=.o) $(SRCS_UTILS:.c=.o)
OBJS_CTYPE = $(SRCS_CTYPE:.c=.o)
OBJS_STDIO = $(SRCS_STDIO:.c=.o)
OBJS_STDLIB = $(SRCS_STDLIB:.c=.o)
OBJS_STRING = $(SRCS_STRING:.c=.o)
OBJS_LIST = $(SRCS_LIST:.c=.o)
OBJS_UTILS = $(SRCS_UTILS:.c=.o)

# ターゲット別のオブジェクトファイル選択（複数ターゲット対応）
SELECTED_OBJS = $(if $(filter ctype,$(MAKECMDGOALS)),$(OBJS_CTYPE))
SELECTED_OBJS += $(if $(filter stdio,$(MAKECMDGOALS)),$(OBJS_STDIO))
SELECTED_OBJS += $(if $(filter stdlib,$(MAKECMDGOALS)),$(OBJS_STDLIB))
SELECTED_OBJS += $(if $(filter string,$(MAKECMDGOALS)),$(OBJS_STRING))
SELECTED_OBJS += $(if $(filter list,$(MAKECMDGOALS)),$(OBJS_LIST))
SELECTED_OBJS += $(if $(filter utils,$(MAKECMDGOALS)),$(OBJS_UTILS))

# デフォルトターゲット
all: $(NAME)

# メインライブラリのビルド
$(NAME): $(OBJS_ALL)
	$(AR) $(NAME) $(OBJS_ALL)

# 個別ライブラリのビルド
$(MY_LIBFT): $(SELECTED_OBJS)
	$(AR) $(MY_LIBFT) $(SELECTED_OBJS)

# 各カテゴリのビルドターゲット
ctype stdio stdlib string list utils: pre_build $(MY_LIBFT)

# 複数ターゲット実行時の事前処理
pre_build:
	@if [ -z "$(SELECTED_OBJS)" ]; then \
		echo "No targets selected"; \
		exit 1; \
	fi

# クリーンアップターゲット
clean:
	$(RM) $(OBJS_ALL)

fclean: clean
	$(RM) $(NAME) $(MY_LIBFT)

re: fclean all

# オブジェクトファイルの生成規則
%.o: %.c
	$(CC) $(WFLAGS) $(IFLAGS) -o $@ -c $<

.PHONY: all clean fclean re ctype stdio stdlib string list utils pre_build
