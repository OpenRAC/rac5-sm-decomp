struct Entry {
    char pad00[0xB4];
    int fB4;
};

extern struct Entry *D_0020704C[];

int func_132BF8(int);

unsigned int func_133128(void)
{
    struct Entry *entry;
    int slot;

    entry = D_0020704C[0];
    if (entry == 0)
        return 0xFFFFFFFFu;
    if (func_132BF8(1) != 0)
        return 0xFFFFFFFFu;
    slot = D_0020704C[0]->fB4 + 1;
    if (slot == -1)
        slot = 0;
    return slot;
}
