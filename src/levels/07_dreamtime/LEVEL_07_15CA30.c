extern char D_003A93F0[];

void func_15CA30(void)
{
    char *state = D_003A93F0;
    int *count = (int *)(state + 0x120c);
    if (*(int *)(state + 0x1208) != 0) {
        int next = *count - 1;
        if (next < 1)
            next = 0;
        *count = next;
    }
}
