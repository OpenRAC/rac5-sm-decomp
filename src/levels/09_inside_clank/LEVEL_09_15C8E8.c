extern int D_0037D070[];

int func_15C8E8(int value)
{
    int *entry = D_0037D070;
    int *end = D_0037D070 + 216;
    for (;;) {
        if (entry[26] != 0 && entry[17] == value) return 1;
        entry += 0x1b;
        if (entry >= end) return 0;
    }
}
