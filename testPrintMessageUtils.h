void testPrintColorMap() {
    char buffer[2048];
    memset(buffer, 0, sizeof(buffer));
    setvbuf(stdout, buffer, _IOFBF, sizeof(buffer));

    fflush(stdout);

    const char* expectedOutput = "Hello World!"

    assert(strcmp(buffer, expectedOutput) == 0);
    assert(result == 25);
}
