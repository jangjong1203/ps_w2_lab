CC = gcc

main : main.c load_data.o print_class.o find_class.o save_all_class.o add_class.o edit_class.o apply_class.o print_my_class.o save_my_class.o
	$(CC) -o main main.c load_data.o print_class.o find_class.o save_all_class.o add_class.o edit_class.o apply_class.o print_my_class.o save_my_class.o

load_data.o : load_data.c class.h
	$(CC) -c load_data.c

print_class.o : print_class.c class.h
	$(CC) -c print_class.c

find_class.o : find_class.c class.h
	$(CC) -c find_class.c

save_all_class.o : save_all_class.c class.h
	$(CC) -c save_all_class.c

add_class.o : add_class.c class.h
	$(CC) -c add_class.c

edit_class.o : edit_class.c class.h
	$(CC) -c edit_class.c

apply_class.o : apply_class.c class.h
	$(CC) -c apply_class.c

print_my_class.o : print_my_class.c class.h
	$(CC) -c print_my_class.c

save_my_class.o : save_my_class.c class.h
	$(CC) -c save_my_class.c

clean :
	del *.o main.exe