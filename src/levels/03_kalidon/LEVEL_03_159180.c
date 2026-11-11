extern char D_003AE9B0[];

void func_159180(void)
{
    char *state = D_003AE9B0;
    int *count = (int *)(state + 0x120c);
    if (*(int *)(state + 0x1208) != 0) {
        int next = *count - 1;
        if (next < 1)
            next = 0;
        *count = next;
    }
}
