#include "libft.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>

void print_test_result(const char *test_name, bool passed) {
    if (passed) {
        printf("[ OK ] %s\n", test_name);
    } else {
        printf("[ !KO ] %s\n", test_name);
    }
}

int main(void) {
    bool all_tests_passed = true;

    // Test ft_isalpha
    bool test_passed = (ft_isalpha('A') == 1 && ft_isalpha('1') == 0);
    print_test_result("ft_isalpha", test_passed);
    all_tests_passed &= test_passed;

    // Test ft_isdigit
    test_passed = (ft_isdigit('5') == 1 && ft_isdigit('a') == 0);
    print_test_result("ft_isdigit", test_passed);
    all_tests_passed &= test_passed;

    // Test ft_isalnum
    test_passed = (ft_isalnum('A') == 1 && ft_isalnum('1') == 1 && ft_isalnum('!') == 0);
    print_test_result("ft_isalnum", test_passed);
    all_tests_passed &= test_passed;

    // Test ft_isascii
    test_passed = (ft_isascii(65) == 1 && ft_isascii(300) == 0);
    print_test_result("ft_isascii", test_passed);
    all_tests_passed &= test_passed;

    // Test ft_isprint
    test_passed = (ft_isprint(32) == 1 && ft_isprint(127) == 0);
    print_test_result("ft_isprint", test_passed);
    all_tests_passed &= test_passed;

    // Test ft_strlen
    test_passed = (ft_strlen("Hello") == 5);
    print_test_result("ft_strlen", test_passed);
    all_tests_passed &= test_passed;

    // Test ft_memset
    char buffer[10];
    ft_memset(buffer, 'A', 10);
    buffer[9] = '\0';
    test_passed = (strcmp(buffer, "AAAAAAAAA") == 0);
    print_test_result("ft_memset", test_passed);
    all_tests_passed &= test_passed;

    // Test ft_bzero
    ft_bzero(buffer, 10);
    test_passed = true;
    for (int i = 0; i < 10; i++) {
        if (buffer[i] != 0) {
            test_passed = false;
            break;
        }
    }
    print_test_result("ft_bzero", test_passed);
    all_tests_passed &= test_passed;

    // Test ft_memcpy
    char src[10] = "Hola";
    char dest[10];
    ft_memcpy(dest, src, sizeof(char) * 10);
    test_passed = (strcmp(dest, src) == 0);
    print_test_result("ft_memcpy", test_passed);
    all_tests_passed &= test_passed;

    // Test ft_memmove
    char overlap[20] = "Hello World";
    ft_memmove(overlap + 6, overlap, 5);
    test_passed = (strcmp(overlap, "Hello Hello") == 0);
    print_test_result("ft_memmove", test_passed);
    all_tests_passed &= test_passed;

    // Test ft_strlcpy
    char dst_cpy[10];
    int ret = ft_strlcpy(dst_cpy, "Hello World", 10);
    test_passed = (strcmp(dst_cpy, "Hello Wor") == 0 && ret == 9);
    print_test_result("ft_strlcpy", test_passed);
    all_tests_passed &= test_passed;

    // Test ft_strlcat
    char dst_cat[20] = "Hello ";
    size_t cat_ret = ft_strlcat(dst_cat, "World", 20);
    test_passed = (strcmp(dst_cat, "Hello World") == 0 && cat_ret == 11);
    print_test_result("ft_strlcat", test_passed);
    all_tests_passed &= test_passed;

    // Test ft_strdup
    char *dup = ft_strdup("Hello");
    test_passed = (strcmp(dup, "Hello") == 0);
    print_test_result("ft_strdup", test_passed);
    free(dup);
    all_tests_passed &= test_passed;

    // Test ft_calloc
    int *arr = ft_calloc(5, sizeof(int));
    test_passed = true;
    for (int i = 0; i < 5; i++) {
        if (arr[i] != 0) {
            test_passed = false;
            break;
        }
    }
    print_test_result("ft_calloc", test_passed);
    free(arr);
    all_tests_passed &= test_passed;

    // Test ft_strchr
    test_passed = (ft_strchr("Hello", 'e') == &"Hello"[1]);
    print_test_result("ft_strchr", test_passed);
    all_tests_passed &= test_passed;

    // Test ft_strrchr
    test_passed = (ft_strrchr("Hello", 'l') == &"Hello"[3]);
    print_test_result("ft_strrchr", test_passed);
    all_tests_passed &= test_passed;

    // Test ft_memcmp
    test_passed = (ft_memcmp("abc", "abc", 3) == 0 && ft_memcmp("abc", "abd", 3) < 0);
    print_test_result("ft_memcmp", test_passed);
    all_tests_passed &= test_passed;

    // Test ft_memchr
    char mem_test[] = "Hello World";
    test_passed = (ft_memchr(mem_test, 'W', 11) == &mem_test[6]);
    print_test_result("ft_memchr", test_passed);
    all_tests_passed &= test_passed;

    // Test ft_strncmp
    test_passed = (ft_strncmp("abc", "abd", 2) == 0 && ft_strncmp("abc", "abd", 3) < 0);
    print_test_result("ft_strncmp", test_passed);
    all_tests_passed &= test_passed;

    // Test ft_strnstr
    test_passed = (ft_strnstr("Hello World", "World", 11) == &"Hello World"[6]);
    print_test_result("ft_strnstr", test_passed);
    all_tests_passed &= test_passed;

    // Test ft_tolower
    test_passed = (ft_tolower('A') == 'a');
    print_test_result("ft_tolower", test_passed);
    all_tests_passed &= test_passed;

    // Test ft_toupper
    test_passed = (ft_toupper('a') == 'A');
    print_test_result("ft_toupper", test_passed);
    all_tests_passed &= test_passed;

    // Test ft_atoi
    test_passed = (ft_atoi("42") == 42 && ft_atoi("-123") == -123 && ft_atoi("   456") == 456);
    print_test_result("ft_atoi", test_passed);
    all_tests_passed &= test_passed;

    if (all_tests_passed) {
        printf("Eres una maquina\n");
    } else {
        printf("Oh shit\n");
    }

    return 0;
}