extern int D_003B0820[];

int func_166BF8(int value)
{
    int *entry = D_003B0820;
    int *end = D_003B0820 + 216;
    for (;;) {
        if (entry[26] != 0 && entry[17] == value) return 1;
        entry += 0x1b;
        if (entry >= end) return 0;
    }
}
