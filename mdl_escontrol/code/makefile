# NOTE: To ensure a terminal is launched as admin, simply launch VS Code as admin
# (1) Compile source code using make file
# (bash)$ make -f makefile
# (2) If necessary, copy main.exe to location where you're allowed to run .exe files
# (bash)$ cp main.exe /c/Temp 
# (3) If already where main.exe is, then use ./main.exe
# (bash)$ /c/Temp/main.exe

# set compiler {gcc}
CC=gcc
# set compiler flags {gcc will look in "." for "include" files (location of .h files otherwise not defined)}
CFLAGS=-I./includes
# Dependency files otherwise not defined
DEPS = *.h

%.o: %.c $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)

makefile: ./escontrol_ert_rtw/*.c
	$(CC) -o main ./escontrol_ert_rtw/*.c