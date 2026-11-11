struct Entry {
    char pad00[0xB4];
    int fB4;
};

extern struct Entry *D_001B4B5C[];

int func_10FA78(int);

unsigned int func_10FE00(void)
{
    struct Entry *entry;
    int slot;

    entry = D_001B4B5C[0];
    if (entry == 0)
        return 0xFFFFFFFFu;
    if (func_10FA78(1) != 0)
        return 0xFFFFFFFFu;
    slot = D_001B4B5C[0]->fB4 + 1;
    if (slot == -1)
        slot = 0;
    return slot;
}
