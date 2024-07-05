#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdarg.h>
#include <sys/stat.h>
#include <sys/types.h>
#include "main.h"
#include <string.h>

#define BUFFER_SIZE 1024

/**
 * print_error_and_exit - Prints error message to stderr and exits with specified exit code
 * @exit_code: The exit code to use when exiting the program
 * @format: The format string for the error message
 * @...: Additional arguments for the format string
 */
void print_error_and_exit(int exit_code, const char *format, ...) {
    va_list args;
    va_start(args, format);
    dprintf(STDERR_FILENO, format, args);
    va_end(args);
    exit(exit_code);
}

/**
 * copy_file - Copies contents from file_from to file_to
 * @file_from: Source file path
 * @file_to: Destination file path
 */
void copy_file(const char *file_from, const char *file_to) {
    int fd_from, fd_to;
    ssize_t bytes_read, bytes_written;
    char buffer[BUFFER_SIZE];

    // Open file_from for reading
    fd_from = open(file_from, O_RDONLY);
    if (fd_from == -1) {
        print_error_and_exit(98, "Error: Can't read from file %s: %s\n", file_from, strerror(errno));
    }

    // Open file_to for writing, create if it doesn't exist, truncate if it does
    fd_to = open(file_to, O_WRONLY | O_CREAT | O_TRUNC, 0644);
    if (fd_to == -1) {
        close(fd_from);
        print_error_and_exit(99, "Error: Can't write to file %s: %s\n", file_to, strerror(errno));
    }

    // Copy contents from file_from to file_to
    while ((bytes_read = read(fd_from, buffer, BUFFER_SIZE)) > 0) {
        bytes_written = write(fd_to, buffer, bytes_read);
        if (bytes_written != bytes_read) {
            close(fd_from);
            close(fd_to);
            if (bytes_written == -1) {
                print_error_and_exit(99, "Error: Can't write to file %s: %s\n", file_to, strerror(errno));
            } else {
                print_error_and_exit(99, "Error: Incomplete write to file %s\n", file_to);
            }
        }
    }

    if (bytes_read == -1) {
        close(fd_from);
        close(fd_to);
        print_error_and_exit(98, "Error: Can't read from file %s: %s\n", file_from, strerror(errno));
    }

    // Close file descriptors
    if (close(fd_from) == -1) {
        print_error_and_exit(100, "Error: Can't close fd %d: %s\n", fd_from, strerror(errno));
    }
    if (close(fd_to) == -1) {
        print_error_and_exit(100, "Error: Can't close fd %d: %s\n", fd_to, strerror(errno));
    }
}

int main(int argc, char *argv[]) {
    const char *file_from, *file_to;

    if (argc < 2 || argc > 3) {
        print_error_and_exit(97, "Usage: %s file_from [file_to]\n", argv[0]);
    }

    file_from = argv[1];
    file_to = (argc == 3) ? argv[2] : ""; // If file_to not provided, use empty string

    // Check if file_from exists and is readable
    if (access(file_from, F_OK) == -1) {
        print_error_and_exit(98, "Error: Can't read from file %s: File doesn't exist\n", file_from);
    }
    if (access(file_from, R_OK) == -1) {
        print_error_and_exit(98, "Error: Can't read from file %s: No read permissions\n", file_from);
    }

    // If file_to is provided, check if it's writable
    if (*file_to != '\0') {
        if (access(file_to, W_OK) == -1 && access(file_to, F_OK) == 0) {
            print_error_and_exit(99, "Error: Can't write to file %s: No write permissions\n", file_to);
        }
    }

    // Perform the copy operation
    copy_file(file_from, file_to);

    return 0;
}
