extern int D_002E4E08[];

int func_144C98(int value)
{
    int *entry = D_002E4E08;
    int *end = D_002E4E08 + 216;
    for (;;) {
        if (entry[26] != 0 && entry[17] == value) return 1;
        entry += 0x1b;
        if (entry >= end) return 0;
    }
}
