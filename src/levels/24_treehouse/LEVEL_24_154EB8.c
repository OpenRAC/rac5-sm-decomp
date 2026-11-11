extern int D_0035FA38[];

int func_154EB8(int value)
{
    int *entry = D_0035FA38;
    int *end = D_0035FA38 + 216;
    for (;;) {
        if (entry[26] != 0 && entry[17] == value) return 1;
        entry += 0x1b;
        if (entry >= end) return 0;
    }
}
