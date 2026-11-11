extern int D_003E56D0[];

int func_1805D0(int value)
{
    int *entry = D_003E56D0;
    int *end = D_003E56D0 + 216;
    for (;;) {
        if (entry[26] != 0 && entry[17] == value) return 1;
        entry += 0x1b;
        if (entry >= end) return 0;
    }
}
