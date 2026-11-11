extern int D_002D5FB8[];

int func_143830(int value)
{
    int *entry = D_002D5FB8;
    int *end = D_002D5FB8 + 216;
    for (;;) {
        if (entry[26] != 0 && entry[17] == value) return 1;
        entry += 0x1b;
        if (entry >= end) return 0;
    }
}
