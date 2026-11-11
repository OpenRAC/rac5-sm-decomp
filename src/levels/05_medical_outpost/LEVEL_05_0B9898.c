extern char D_00314924[];
extern int func_0BB148(char *global, int *output);
extern int func_0BB028(int value);

int func_0B9898(void)
{
    int output;
    int result;
    char *global = D_00314924;
    if (*(int *)(global + 0x20) == 0) {
        result = 0;
    } else {
        func_0BB148(global, &output);
        *(int *)(global - 4) = output;
        func_0BB028(output);
        result = output;
    }
    return result;
}
