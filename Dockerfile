# Use gcc compiler for C
FROM gcc:14.2.0-bookworm

# Set the working directory
WORKDIR /usr/src/printf

# Copy header files from the 'inc' directory
COPY inc ./inc

# Copy source files from the 'src' directory
COPY src ./src

# Copy the MakeFile
COPY Makefile ./

# Execute make
RUN make

# Define the command to run the executable
CMD ["./printf"]
