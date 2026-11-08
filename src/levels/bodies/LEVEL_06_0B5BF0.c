extern char D_003157E4[];
extern int func_0B74A0(char *global, int *output);
extern int func_0B7380(int value);

int func_0B5BF0(void)
{
    int output;
    int result;
    char *global = D_003157E4;
    if (*(int *)(global + 0x20) == 0) {
        result = 0;
    } else {
        func_0B74A0(global, &output);
        *(int *)(global - 4) = output;
        func_0B7380(output);
        result = output;
    }
    return result;
}
