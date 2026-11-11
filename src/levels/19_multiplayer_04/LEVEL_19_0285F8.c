extern char D_001E05F0[];

void func_0285F8(void)
{
    char *state = D_001E05F0;
    int *count = (int *)(state + 0x154);
    if (*(int *)(state + 0x150) != 0) {
        int next = *count - 1;
        if (next < 1)
            next = 0;
        *count = next;
    }
}
