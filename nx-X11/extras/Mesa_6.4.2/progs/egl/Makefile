# progs/egl/Makefile

TOP = ../..
include $(TOP)/configs/current


INCLUDE_DIRS = -I$(TOP)/include

HEADERS = $(TOP)/include/GLES/egl.h

PROGRAMS = \
	demo1 \
	demo2 \
	demo3 \
	eglinfo \
	eglgears


.c.o:
	$(CC) -c $(INCLUDE_DIRS) $(CFLAGS) $< -o $@



default: $(PROGRAMS)


demo1: demo1.o $(LIB_DIR)/libEGL.so
	$(CC) $(CFLAGS) demo1.o -L$(LIB_DIR) -lEGL $(LIBDRM_LIB) -o $@

demo1.o: demo1.c $(HEADERS)
	$(CC) -c $(CFLAGS) -I$(TOP)/include demo1.c


demo2: demo2.o $(LIB_DIR)/libEGL.so
	$(CC) $(CFLAGS) demo2.o -L$(LIB_DIR) -lEGL $(LIBDRM_LIB) $(APP_LIB_DEPS) -o $@

demo2.o: demo2.c $(HEADERS)
	$(CC) -c $(CFLAGS) -I$(TOP)/include demo2.c


demo3: demo3.o $(LIB_DIR)/libEGL.so
	$(CC) $(CFLAGS) demo3.o -L$(LIB_DIR) -lEGL $(LIBDRM_LIB) $(APP_LIB_DEPS) -o $@

demo3.o: demo3.c $(HEADERS)
	$(CC) -c $(CFLAGS) -I$(TOP)/include demo3.c


eglinfo: eglinfo.o $(LIB_DIR)/libEGL.so
	$(CC) $(CFLAGS) eglinfo.o -L$(LIB_DIR) -lEGL $(LIBDRM_LIB) -o $@

eglinfo.o: eglinfo.c $(HEADERS)
	$(CC) -c $(CFLAGS) -I$(TOP)/include eglinfo.c


eglgears: eglgears.o $(LIB_DIR)/libEGL.so
	$(CC) $(CFLAGS) eglgears.o -L$(LIB_DIR) -lEGL $(LIBDRM_LIB) $(APP_LIB_DEPS) -o $@

eglgears.o: eglgears.c $(HEADERS)
	$(CC) -c $(CFLAGS) -I$(TOP)/include eglgears.c


clean:
	rm -f *.o *~
	rm -f *.so
	rm -f $(PROGRAMS)
