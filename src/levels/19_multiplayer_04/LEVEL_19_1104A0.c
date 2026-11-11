struct Entry {
    char pad00[0xB4];
    int fB4;
};

extern struct Entry *D_001B5CDC[];

int func_110118(int);

unsigned int func_1104A0(void)
{
    struct Entry *entry;
    int slot;

    entry = D_001B5CDC[0];
    if (entry == 0)
        return 0xFFFFFFFFu;
    if (func_110118(1) != 0)
        return 0xFFFFFFFFu;
    slot = D_001B5CDC[0]->fB4 + 1;
    if (slot == -1)
        slot = 0;
    return slot;
}
