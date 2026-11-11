extern char D_00343264[];
extern int func_0C23B8(char *global, int *output);
extern int func_0C2298(int value);

int func_0C0AD0(void)
{
    int output;
    int result;
    char *global = D_00343264;
    if (*(int *)(global + 0x20) == 0) {
        result = 0;
    } else {
        func_0C23B8(global, &output);
        *(int *)(global - 4) = output;
        func_0C2298(output);
        result = output;
    }
    return result;
}
