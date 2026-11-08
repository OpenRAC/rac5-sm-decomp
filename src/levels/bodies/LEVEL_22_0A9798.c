extern char D_0027E624[];
extern int func_0AB050(char *global, int *output);
extern int func_0AAF30(int value);

int func_0A9798(void)
{
    int output;
    int result;
    char *global = D_0027E624;
    if (*(int *)(global + 0x20) == 0) {
        result = 0;
    } else {
        func_0AB050(global, &output);
        *(int *)(global - 4) = output;
        func_0AAF30(output);
        result = output;
    }
    return result;
}
