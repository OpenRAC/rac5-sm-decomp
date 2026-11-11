extern char D_0033E364[];
extern int func_0BEC00(char *global, int *output);
extern int func_0BEAE0(int value);

int func_0BD350(void)
{
    int output;
    int result;
    char *global = D_0033E364;
    if (*(int *)(global + 0x20) == 0) {
        result = 0;
    } else {
        func_0BEC00(global, &output);
        *(int *)(global - 4) = output;
        func_0BEAE0(output);
        result = output;
    }
    return result;
}
