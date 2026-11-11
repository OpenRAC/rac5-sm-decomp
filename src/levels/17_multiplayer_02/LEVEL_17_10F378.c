struct Entry {
    char pad00[0xB4];
    int fB4;
};

extern struct Entry *D_001A815C[];

int func_10EFF0(int);

unsigned int func_10F378(void)
{
    struct Entry *entry;
    int slot;

    entry = D_001A815C[0];
    if (entry == 0)
        return 0xFFFFFFFFu;
    if (func_10EFF0(1) != 0)
        return 0xFFFFFFFFu;
    slot = D_001A815C[0]->fB4 + 1;
    if (slot == -1)
        slot = 0;
    return slot;
}
