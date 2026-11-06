extern int D_00382670[];

int func_15A958(int value)
{
    int *entry = D_00382670;
    int *end = D_00382670 + 216;
    for (;;) {
        if (entry[26] != 0 && entry[17] == value) return 1;
        entry += 0x1b;
        if (entry >= end) return 0;
    }
}
