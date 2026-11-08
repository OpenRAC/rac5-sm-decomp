extern char D_00276B24[];
extern int func_0AB908(char *global, int *output);
extern int func_0AB7E0(int value);

int func_0A9C18(void)
{
    int output;
    int result;
    char *global = D_00276B24;
    if (*(int *)(global + 0x20) == 0) {
        result = 0;
    } else {
        func_0AB908(global, &output);
        *(int *)(global - 4) = output;
        func_0AB7E0(output);
        result = output;
    }
    return result;
}
