#include <string.h>
#include <stdbool.h>

bool validate_username(const char *username) {
    const char *expected_username = "your_github_username"; // Replace with your GitHub username
    return strcmp(username, expected_username) == 0;
}
