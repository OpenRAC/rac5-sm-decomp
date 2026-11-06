extern char D_0021E4F0[];

void func_0291F0(void)
{
    char *state = D_0021E4F0;
    int *count = (int *)(state + 0x154);
    if (*(int *)(state + 0x150) != 0) {
        int next = *count - 1;
        if (next < 1)
            next = 0;
        *count = next;
    }
}
