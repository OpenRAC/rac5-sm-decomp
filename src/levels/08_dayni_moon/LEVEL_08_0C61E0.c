extern char D_00377CE4[];
extern int func_0C7AC8(char *global, int *output);
extern int func_0C79A8(int value);

int func_0C61E0(void)
{
    int output;
    int result;
    char *global = D_00377CE4;
    if (*(int *)(global + 0x20) == 0) {
        result = 0;
    } else {
        func_0C7AC8(global, &output);
        *(int *)(global - 4) = output;
        func_0C79A8(output);
        result = output;
    }
    return result;
}
