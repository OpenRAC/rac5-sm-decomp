extern char D_002D4098[];

void func_1377D8(void)
{
    char *state = D_002D4098;
    int *count = (int *)(state + 0x120c);
    if (*(int *)(state + 0x1208) != 0) {
        int next = *count - 1;
        if (next < 1)
            next = 0;
        *count = next;
    }
}
