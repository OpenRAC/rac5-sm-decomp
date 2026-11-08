extern char D_002402A4[];
extern int func_09D1E8(char *global, int *output);
extern int func_09D0C8(int value);

int func_09B938(void)
{
    int output;
    int result;
    char *global = D_002402A4;
    if (*(int *)(global + 0x20) == 0) {
        result = 0;
    } else {
        func_09D1E8(global, &output);
        *(int *)(global - 4) = output;
        func_09D0C8(output);
        result = output;
    }
    return result;
}
