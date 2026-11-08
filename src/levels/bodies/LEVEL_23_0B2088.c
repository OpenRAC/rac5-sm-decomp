extern char D_002F9EA4[];
extern int func_0B3940(char *global, int *output);
extern int func_0B3820(int value);

int func_0B2088(void)
{
    int output;
    int result;
    char *global = D_002F9EA4;
    if (*(int *)(global + 0x20) == 0) {
        result = 0;
    } else {
        func_0B3940(global, &output);
        *(int *)(global - 4) = output;
        func_0B3820(output);
        result = output;
    }
    return result;
}
