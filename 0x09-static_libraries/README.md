# 0x09. C - Static ibraries
C source code & shell script for tasks provided in project "0x09. C - Static libraries"

### Tasks Description

##### Mandatory Tasks
- Task 0 : Create a static library called libmy.a using the C files in the src directory
Steps : 
	1. Compile the C source files int object files by using the following command:
		> gcc -Wall -Werror -Wextra -pedantic --std=gnu89 -c ./src/*.c
	2. Move the object files into a separate folder (for the sake of organization) using the following command:
		> mv *.o ./obj/
	3. Archive the object files using ar with the following command:
		> ar -rc libmy.a ./obj/*.o
	4. Index the resultign archive using ranlib with the following command:
		> ranlib libmy.a

- Task 1 : A script that creates a static library using any and all .c files in the current directory 
