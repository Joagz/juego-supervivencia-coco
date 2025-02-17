# DIRS
SOURCE_DIR = src
BUILD_DIR = build
BIN_DIR = bin
INCLUDE_DIR = include

# TARGETS
TARGET = $(BIN_DIR)/mijuego

# OBJECT FILES 
NIVEL_1_OBJ = $(BUILD_DIR)/nivel_1/nivel_1.o
NIVEL_2_OBJ = $(BUILD_DIR)/nivel_2/nivel_2.o
NIVEL_3_OBJ = $(BUILD_DIR)/nivel_3/nivel_3.o
NIVEL_4_OBJ = $(BUILD_DIR)/nivel_4/nivel_4.o
NIVEL_5_OBJ = $(BUILD_DIR)/nivel_5/nivel_5.o
NIVEL_F_OBJ = $(BUILD_DIR)/nivel_final/nivel_final.o

# SOURCES 
MAIN_SRC = $(SOURCE_DIR)/entrypoint.cc
NIVEL_1_SRC = $(SOURCE_DIR)/nivel_1/nivel_1.cc
NIVEL_2_SRC = $(SOURCE_DIR)/nivel_2/nivel_2.cc
NIVEL_3_SRC = $(SOURCE_DIR)/nivel_3/nivel_3.cc
NIVEL_4_SRC = $(SOURCE_DIR)/nivel_4/nivel_4.cc
NIVEL_5_SRC = $(SOURCE_DIR)/nivel_5/nivel_5.cc
NIVEL_F_SRC = $(SOURCE_DIR)/nivel_final/nivel_final.cc

# LIB BUILDS 
NIVELES_LIB = $(INCLUDE_DIR)/libniveles.a

# FLAGS 
LDFLAGS = -L./$(INCLUDE_DIR) -lniveles
CFLAGS = -Wall -g 
CC = g++

NIVELES_OBJ = $(NIVEL_1_OBJ) $(NIVEL_2_OBJ) $(NIVEL_3_OBJ) $(NIVEL_4_OBJ) $(NIVEL_5_OBJ) $(NIVEL_F_OBJ)

# COMPILAR EL PROGRAMA PRINCIPAL INCLUYENDO -lniveles

$(TARGET): $(NIVELES_LIB)
	$(CC) $(CFLAGS) $(LDFLAGS) $(MAIN_SRC) -o $(TARGET)

# LINKEAR ARCHIVOS OBJETO Y CREAR LIBRERIA (.a)

$(NIVELES_LIB): $(NIVELES_OBJ)
	ar rcs $(NIVELES_LIB) $(NIVELES_OBJ)

# CREAR ARCHIVOS OBJECTO PARA LA LIBRERIA

$(NIVEL_1_OBJ): $(NIVEL_1_SRC)
	$(CC) $(CFLAGS) -c $(NIVEL_1_SRC) -o $(NIVEL_1_OBJ)

$(NIVEL_2_OBJ): $(NIVEL_2_SRC)
	$(CC) $(CFLAGS) -c $(NIVEL_2_SRC) -o $(NIVEL_2_OBJ)

$(NIVEL_3_OBJ): $(NIVEL_3_SRC)
	$(CC) $(CFLAGS) -c $(NIVEL_3_SRC) -o $(NIVEL_3_OBJ)

$(NIVEL_4_OBJ): $(NIVEL_4_SRC)
	$(CC) $(CFLAGS) -c $(NIVEL_4_SRC) -o $(NIVEL_4_OBJ)

$(NIVEL_5_OBJ): $(NIVEL_5_SRC)
	$(CC) $(CFLAGS) -c $(NIVEL_5_SRC) -o $(NIVEL_5_OBJ)

$(NIVEL_F_OBJ): $(NIVEL_F_SRC)
	$(CC) $(CFLAGS) -c $(NIVEL_F_SRC) -o $(NIVEL_F_OBJ)

