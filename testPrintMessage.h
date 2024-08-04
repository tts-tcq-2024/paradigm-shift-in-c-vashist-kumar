void test_printMsg() {
    // Redirect stdout to a file
    FILE *fp = freopen("test_output.txt", "w", stdout);
    assert(fp != NULL);

    // Call the function
    printMsg("Hello, world!");

    // Close the file and reset stdout
    fclose(fp);
    fp = freopen("/dev/tty", "a", stdout);
    assert(fp != NULL);

    // Read the output from the file
    char buffer[256];
    fp = fopen("test_output.txt", "r");
    assert(fp != NULL);
    fgets(buffer, sizeof(buffer), fp);
    fclose(fp);

    // Check the output
    assert(strcmp(buffer, "Hello, world!\n") == 0);

    // Cleanup
    remove("test_output.txt");

}
