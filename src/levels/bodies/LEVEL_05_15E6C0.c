extern int D_00381788[];

int func_15E6C0(int value)
{
    int *entry = D_00381788;
    int *end = D_00381788 + 216;
    for (;;) {
        if (entry[26] != 0 && entry[17] == value) return 1;
        entry += 0x1b;
        if (entry >= end) return 0;
    }
}
