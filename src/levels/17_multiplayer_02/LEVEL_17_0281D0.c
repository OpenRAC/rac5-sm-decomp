extern char D_001D1770[];

void func_0281D0(void)
{
    char *state = D_001D1770;
    int *count = (int *)(state + 0x154);
    if (*(int *)(state + 0x150) != 0) {
        int next = *count - 1;
        if (next < 1)
            next = 0;
        *count = next;
    }
}
