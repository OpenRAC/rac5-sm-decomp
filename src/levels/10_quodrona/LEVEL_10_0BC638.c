extern char D_00331E64[];
extern int func_0BDEF0(char *global, int *output);
extern int func_0BDDD0(int value);

int func_0BC638(void)
{
    int output;
    int result;
    char *global = D_00331E64;
    if (*(int *)(global + 0x20) == 0) {
        result = 0;
    } else {
        func_0BDEF0(global, &output);
        *(int *)(global - 4) = output;
        func_0BDDD0(output);
        result = output;
    }
    return result;
}
