extern char D_00267CA4[];
extern int func_0AB570(char *global, int *output);
extern int func_0AB448(int value);

int func_0A9880(void)
{
    int output;
    int result;
    char *global = D_00267CA4;
    if (*(int *)(global + 0x20) == 0) {
        result = 0;
    } else {
        func_0AB570(global, &output);
        *(int *)(global - 4) = output;
        func_0AB448(output);
        result = output;
    }
    return result;
}
