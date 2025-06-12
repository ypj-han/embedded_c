# ==========================================================
# Define of Makefile
# ==========================================================

# Compiler and options
CC = gcc
CFLAGS = -Wall -Wextra -std=c99 -g
DEBUG_FLAGS = -DDEBUG -o0	# 定义 DEBUG
RELEASE_FLAGS = -o2 -DNDEBUG	# DNDEBUG 定义 NDEBUG宏，关闭断言

# Path Definition
SRC_DIR = src
OBJ_DIR = obj
INC_DIR = inc
BIN_DIR = .

# Project files
TARGET = calculator
SOURCES = $(wildcard $(SRC_DIR)/*.c)
OBJECTS = $(SOURCES:$(SRC_DIR)/%.c=$(OBJ_DIR)/%.o)
HEADERS = $(wildcard $(INC_DIR)/*.h)

# Shell to create folder
$(shell mkdir -p $(OBJ_DIR))

# ==========================================================
# Main Target
# ==========================================================

# Default Compile project
all: $(TARGET)

$(TARGET): $(OBJECTS)
	@echo "Link is generated $(TARGET)"
	$(CC) $(OBJECTS) -o $(TARGET)
	@echo "Compile finished!"

# Compile the source file to destination file
$(OBJ_DIR)/%.o: $(SRC_DIR)/%.c
	@echo "Compile $<..."
	$(CC) $(CFLAGS) -I$(INC_DIR) -c $< -o $@

# ==========================================================
# Debug and Release version
# ==========================================================

debug: CFLAGS += $(DEBUG_FLAGS)
debug: $(TARGET)
	@echo "Debug Version Compile done!"

release: CFLAGS = -Wall -Wextra -std=C99 $(RELEASE_FLAGS)
release: clean $(TARGET)
	@echo "Release Version Compile done!"


# ==========================================================
# Utilities 
# ==========================================================

run: $(TARGET)
	@echo "Run $(TARGET)..."
	./$(TARGET)

clean:
	@echo "Clean files..."
	rm -rf $(OBJ_DIR)
	rm -rf $(TARGET)
	@echo "Clean finished!"

clean-obj:
	@echo "Clean obj"
	rm -rf $(OBJ_DIR)
		
rebuild: clean all

info:
	@echo "Project Info:"
	@echo "Target: $(TARGET)"
	@echo "Source files: $(SOURCES)"
	@echo "Objective files: $(OBJECTS)"
	@echo "Compiler: $(CC)"
	@echo "Compile Flags: $(CFLAGS)"


$(OBJECTS):$(HEADERS)

.PHONY: all debug release run clean clean-obj rebuild

.PRECIOUS: $(OBJ_DIR)/%.o


