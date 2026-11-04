struct Entry {
    char pad00[0xB4];
    int fB4;
};

extern struct Entry *D_001B5FDC[];

int func_10E728(int);

unsigned int func_10EAB0(void)
{
    struct Entry *entry;
    int slot;

    entry = D_001B5FDC[0];
    if (entry == 0)
        return 0xFFFFFFFFu;
    if (func_10E728(1) != 0)
        return 0xFFFFFFFFu;
    slot = D_001B5FDC[0]->fB4 + 1;
    if (slot == -1)
        slot = 0;
    return slot;
}
