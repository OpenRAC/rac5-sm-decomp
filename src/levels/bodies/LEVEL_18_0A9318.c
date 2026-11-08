extern char D_00276D24[];
extern int func_0AB008(char *global, int *output);
extern int func_0AAEE0(int value);

int func_0A9318(void)
{
    int output;
    int result;
    char *global = D_00276D24;
    if (*(int *)(global + 0x20) == 0) {
        result = 0;
    } else {
        func_0AB008(global, &output);
        *(int *)(global - 4) = output;
        func_0AAEE0(output);
        result = output;
    }
    return result;
}
