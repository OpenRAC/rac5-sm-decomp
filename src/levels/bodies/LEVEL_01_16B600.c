extern int D_003959F8[];

int func_16B600(int value)
{
    int *entry = D_003959F8;
    int *end = D_003959F8 + 216;
    for (;;) {
        if (entry[26] != 0 && entry[17] == value) return 1;
        entry += 0x1b;
        if (entry >= end) return 0;
    }
}
