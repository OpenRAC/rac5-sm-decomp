extern char D_00137DF0[];

void func_025358(void)
{
    char *state = D_00137DF0;
    int *count = (int *)(state + 0x154);
    if (*(int *)(state + 0x150) != 0) {
        int next = *count - 1;
        if (next < 1)
            next = 0;
        *count = next;
    }
}
