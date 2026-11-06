extern char D_002E3118[];

void func_1376B8(void)
{
    char *state = D_002E3118;
    int *count = (int *)(state + 0x120c);
    if (*(int *)(state + 0x1208) != 0) {
        int next = *count - 1;
        if (next < 1)
            next = 0;
        *count = next;
    }
}
