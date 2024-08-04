void test_printMsg() {
    // Redirect stdout to a file
    FILE *fp = freopen("test_output.txt", "w", stdout);


    // Call the function
    printMsg("Hello, world!");

    // Close the file and reset stdout
    fclose(fp);
    fp = freopen("/dev/tty", "a", stdout);


    // Read the output from the file
    char buffer[256];
    fp = fopen("test_output.txt", "r");

    fgets(buffer, sizeof(buffer), fp);
    fclose(fp);

    // Check the output
    assert(strcmp(buffer, "Hello, world!\n") == 0);

    // Cleanup
    remove("test_output.txt");

}
