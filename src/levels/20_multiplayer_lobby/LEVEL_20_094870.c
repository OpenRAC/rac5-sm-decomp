extern char D_0019A1E4[];
extern int func_096560(char *global, int *output);
extern int func_096438(int value);

int func_094870(void)
{
    int output;
    int result;
    char *global = D_0019A1E4;
    if (*(int *)(global + 0x20) == 0) {
        result = 0;
    } else {
        func_096560(global, &output);
        *(int *)(global - 4) = output;
        func_096438(output);
        result = output;
    }
    return result;
}
