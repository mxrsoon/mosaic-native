.DEFAULT_GOAL := all

CC := g++

V8_ROOT := lib/v8
V8_TARGET := x64.release
V8_INCLUDE := ${V8_ROOT}/include
V8_OBJ := ${V8_ROOT}/out.gn/${V8_TARGET}/obj
V8_LIB := v8_monolith
V8_MACROS := -DV8_COMPRESS_POINTERS

CWALK_ROOT := lib/cwalk
CWALK_INCLUDE := ${CWALK_ROOT}/include
CWALK_SRC := ${CWALK_ROOT}/src/cwalk.c

GTK_VERSION := 3.0
GTK_FLAGS := `pkg-config --cflags --libs gtk+-${GTK_VERSION}`

PISTON_ROOT := lib/piston
PISTON_INCLUDE := ${PISTON_ROOT}/include
PISTON_SRC_DIR := ${PISTON_ROOT}/src
PISTON_SRC := $(wildcard ${PISTON_SRC_DIR}/*.cc)

MOSAIC_ROOT := .
MOSAIC_INCLUDE := ${MOSAIC_ROOT}/include
MOSAIC_SRC_DIR := ${MOSAIC_ROOT}/src
MOSAIC_MAIN := ${MOSAIC_SRC_DIR}/loader.cc
MOSAIC_SRC := ${shell find ${MOSAIC_SRC_DIR} -name '*.cc'}

INCLUDES := -I${MOSAIC_INCLUDE} -I${V8_ROOT} -I${V8_INCLUDE} -I${PISTON_INCLUDE} -I${CWALK_INCLUDE}
SOURCES := ${MOSAIC_SRC} ${PISTON_SRC} ${CWALK_SRC}
FLAGS := -g -pthread
STANDARD := c++2a
OUTPUT := loader

all: ${SOURCES}
	@echo "Compiling..."
	${CC} ${INCLUDES} ${SOURCES} -o ${OUTPUT} -l${V8_LIB} -L${V8_OBJ} -std=${STANDARD} ${V8_MACROS} ${GTK_FLAGS} ${FLAGS}
	@echo "Done."