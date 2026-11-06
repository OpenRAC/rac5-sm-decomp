extern void func_0235A0(void *, int, int, long long);

void func_023820(char *record, int wanted)
{
    int state = *(int *)(record + 0x9a0);
    if (state == wanted && *(int *)(record + 0x9c4) != 12 &&
        *(int *)(record + 0x5a4) != 0) {
        func_0235A0(*(char **)(record + 0x5a4) + 0x74,
                    state, *(int *)(record + 0xf8), -1LL);
        if (*(int *)(record + 0x5a8) != 0) {
            func_0235A0(*(char **)(record + 0x5a8) + 0x74,
                        state, *(int *)(record + 0xf8), -1LL);
        }
    }
}
