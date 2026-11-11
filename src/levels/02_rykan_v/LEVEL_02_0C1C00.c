extern char D_0033FF64[];
extern int func_0C34B0(char *global, int *output);
extern int func_0C3390(int value);

int func_0C1C00(void)
{
    int output;
    int result;
    char *global = D_0033FF64;
    if (*(int *)(global + 0x20) == 0) {
        result = 0;
    } else {
        func_0C34B0(global, &output);
        *(int *)(global - 4) = output;
        func_0C3390(output);
        result = output;
    }
    return result;
}
