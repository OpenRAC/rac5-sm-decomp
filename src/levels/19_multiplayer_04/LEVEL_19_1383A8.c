extern char D_002E2EC8[];

void func_1383A8(void)
{
    char *state = D_002E2EC8;
    int *count = (int *)(state + 0x120c);
    if (*(int *)(state + 0x1208) != 0) {
        int next = *count - 1;
        if (next < 1)
            next = 0;
        *count = next;
    }
}
