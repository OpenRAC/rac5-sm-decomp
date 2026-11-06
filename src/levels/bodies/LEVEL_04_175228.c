extern int D_003B0198[];

int func_175228(int value)
{
    int *entry = D_003B0198;
    int *end = D_003B0198 + 216;
    for (;;) {
        if (entry[26] != 0 && entry[17] == value) return 1;
        entry += 0x1b;
        if (entry >= end) return 0;
    }
}
