extern char D_001FEBF0[];

void func_028978(void)
{
    char *state = D_001FEBF0;
    int *count = (int *)(state + 0x154);
    if (*(int *)(state + 0x150) != 0) {
        int next = *count - 1;
        if (next < 1)
            next = 0;
        *count = next;
    }
}
