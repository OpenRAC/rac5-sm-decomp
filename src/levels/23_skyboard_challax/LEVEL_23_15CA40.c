extern int D_00363F98[];

int func_15CA40(int value)
{
    int *entry = D_00363F98;
    int *end = D_00363F98 + 216;
    for (;;) {
        if (entry[26] != 0 && entry[17] == value) return 1;
        entry += 0x1b;
        if (entry >= end) return 0;
    }
}
