extern char D_002F4924[];
extern int func_0B6468(char *global, int *output);
extern int func_0B6348(int value);

int func_0B4B80(void)
{
    int output;
    int result;
    char *global = D_002F4924;
    if (*(int *)(global + 0x20) == 0) {
        result = 0;
    } else {
        func_0B6468(global, &output);
        *(int *)(global - 4) = output;
        func_0B6348(output);
        result = output;
    }
    return result;
}
