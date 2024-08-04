#include <stdarg.h>
#include <stddef.h>
#include <setjmp.h>

// Mocked function
void mock_printMsg(const char *message) {
    check_expected(message);
}

// Function pointer
void (*printMessagemock)(const char *message) = mock_printMsg;

// Unit test function
static void testPrintMsg(void **state) {
    (void) state; // unused variable

    // Set expected message
    expect_string(mock_printMsg, message, "Hello, World!");

    // Call the function pointer
    printMessagemock("Hello, World!");
}

int main(void) {
    const struct CMUnitTest tests[] = {
        cmocka_unit_test(testPrintMsg),
    };

    return cmocka_run_group_tests(tests, NULL, NULL);
}
