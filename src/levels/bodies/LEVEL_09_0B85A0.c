extern char D_003101E4[];
extern int func_0B9E50(char *global, int *output);
extern int func_0B9D30(int value);

int func_0B85A0(void)
{
    int output;
    int result;
    char *global = D_003101E4;
    if (*(int *)(global + 0x20) == 0) {
        result = 0;
    } else {
        func_0B9E50(global, &output);
        *(int *)(global - 4) = output;
        func_0B9D30(output);
        result = output;
    }
    return result;
}
