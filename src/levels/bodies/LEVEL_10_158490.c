extern char D_0039CEC0[];

void func_158490(void)
{
    char *state = D_0039CEC0;
    int *count = (int *)(state + 0x120c);
    if (*(int *)(state + 0x1208) != 0) {
        int next = *count - 1;
        if (next < 1)
            next = 0;
        *count = next;
    }
}
