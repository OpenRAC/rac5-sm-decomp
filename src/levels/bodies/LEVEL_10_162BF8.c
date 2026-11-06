extern int D_0039ECC0[];

int func_162BF8(int value)
{
    int *entry = D_0039ECC0;
    int *end = D_0039ECC0 + 216;
    for (;;) {
        if (entry[26] != 0 && entry[17] == value) return 1;
        entry += 0x1b;
        if (entry >= end) return 0;
    }
}
