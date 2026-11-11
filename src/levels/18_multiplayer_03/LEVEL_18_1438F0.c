extern int D_002E5048[];

int func_1438F0(int value)
{
    int *entry = D_002E5048;
    int *end = D_002E5048 + 216;
    for (;;) {
        if (entry[26] != 0 && entry[17] == value) return 1;
        entry += 0x1b;
        if (entry >= end) return 0;
    }
}
