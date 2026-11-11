struct Entry {
    char pad00[0xB4];
    int fB4;
};

extern struct Entry *D_001D7CCC[];

int func_1286F8(int);

unsigned int func_128C28(void)
{
    struct Entry *entry;
    int slot;

    entry = D_001D7CCC[0];
    if (entry == 0)
        return 0xFFFFFFFFu;
    if (func_1286F8(1) != 0)
        return 0xFFFFFFFFu;
    slot = D_001D7CCC[0]->fB4 + 1;
    if (slot == -1)
        slot = 0;
    return slot;
}
