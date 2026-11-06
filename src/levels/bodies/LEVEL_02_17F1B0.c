extern int D_003AD7A8[];

int func_17F1B0(int value)
{
    int *entry = D_003AD7A8;
    int *end = D_003AD7A8 + 216;
    for (;;) {
        if (entry[26] != 0 && entry[17] == value) return 1;
        entry += 0x1b;
        if (entry >= end) return 0;
    }
}
