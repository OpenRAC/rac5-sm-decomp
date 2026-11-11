extern char D_00393C08[];

void func_15F910(void)
{
    char *state = D_00393C08;
    int *count = (int *)(state + 0x120c);
    if (*(int *)(state + 0x1208) != 0) {
        int next = *count - 1;
        if (next < 1)
            next = 0;
        *count = next;
    }
}
