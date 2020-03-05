main_file = start.c
library_files = exer.c practice.c
linker_files = exer.o practice.o
run_file = start.run

compile: $(linker_files)
			gcc -c $(library_files)

run: $(main_file)
		gcc -o $(run_file) $(main_file) $(linker_files)
		clear
		./$(run_file)

clean: $(linker_files)
		rm $(linker_files)