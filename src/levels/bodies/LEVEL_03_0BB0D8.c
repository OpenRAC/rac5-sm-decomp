extern char D_003438E4[];
extern int func_0BC988(char *global, int *output);
extern int func_0BC868(int value);

int func_0BB0D8(void)
{
    int output;
    int result;
    char *global = D_003438E4;
    if (*(int *)(global + 0x20) == 0) {
        result = 0;
    } else {
        func_0BC988(global, &output);
        *(int *)(global - 4) = output;
        func_0BC868(output);
        result = output;
    }
    return result;
}
