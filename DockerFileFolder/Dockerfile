#Use gcc compiler for C
FROM gcc:latest

#Set the working directory
WORKDIR /usr/src/printf

#Copy header files from the 'inc' directory
COPY inc ./inc

#Copy source files from the 'src' directory
COPY src ./src

#Compile the C source files using 'cc' with specified tags
RUN cc -Wall -Wextra -Werror -o printf ./src/*.c

#Define the command to run the executable
CMD ["./printf"]
