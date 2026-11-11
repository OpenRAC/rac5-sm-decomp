struct Entry {
    char pad00[0xB4];
    int fB4;
};

extern struct Entry *D_0011721C[];

int func_0E2860(int);

unsigned int func_0E2BE8(void)
{
    struct Entry *entry;
    int slot;

    entry = D_0011721C[0];
    if (entry == 0)
        return 0xFFFFFFFFu;
    if (func_0E2860(1) != 0)
        return 0xFFFFFFFFu;
    slot = D_0011721C[0]->fB4 + 1;
    if (slot == -1)
        slot = 0;
    return slot;
}
