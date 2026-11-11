extern char D_002769A4[];
extern int func_0AC030(char *global, int *output);
extern int func_0ABF08(int value);

int func_0AA340(void)
{
    int output;
    int result;
    char *global = D_002769A4;
    if (*(int *)(global + 0x20) == 0) {
        result = 0;
    } else {
        func_0AC030(global, &output);
        *(int *)(global - 4) = output;
        func_0ABF08(output);
        result = output;
    }
    return result;
}
