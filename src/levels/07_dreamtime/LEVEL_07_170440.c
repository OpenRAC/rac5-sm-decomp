extern int D_003AB290[];

int func_170440(int value)
{
    int *entry = D_003AB290;
    int *end = D_003AB290 + 216;
    for (;;) {
        if (entry[26] != 0 && entry[17] == value) return 1;
        entry += 0x1b;
        if (entry >= end) return 0;
    }
}
