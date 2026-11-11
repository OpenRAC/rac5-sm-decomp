struct Entry {
    char pad00[0xB4];
    int fB4;
};

extern struct Entry *D_001F5C4C[];

int func_1292C8(int);

unsigned int func_1297F8(void)
{
    struct Entry *entry;
    int slot;

    entry = D_001F5C4C[0];
    if (entry == 0)
        return 0xFFFFFFFFu;
    if (func_1292C8(1) != 0)
        return 0xFFFFFFFFu;
    slot = D_001F5C4C[0]->fB4 + 1;
    if (slot == -1)
        slot = 0;
    return slot;
}
