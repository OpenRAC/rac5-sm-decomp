struct Entry {
    char pad00[0xB4];
    int fB4;
};

extern struct Entry *D_0016602C[];

int func_10A0C8(int);

unsigned int func_10A5F8(void)
{
    struct Entry *entry;
    int slot;

    entry = D_0016602C[0];
    if (entry == 0)
        return 0xFFFFFFFFu;
    if (func_10A0C8(1) != 0)
        return 0xFFFFFFFFu;
    slot = D_0016602C[0]->fB4 + 1;
    if (slot == -1)
        slot = 0;
    return slot;
}
