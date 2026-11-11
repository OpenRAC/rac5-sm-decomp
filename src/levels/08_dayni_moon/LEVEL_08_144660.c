struct Entry {
    char pad00[0xB4];
    int fB4;
};

extern struct Entry *D_0024FF0C[];

int func_144130(int);

unsigned int func_144660(void)
{
    struct Entry *entry;
    int slot;

    entry = D_0024FF0C[0];
    if (entry == 0)
        return 0xFFFFFFFFu;
    if (func_144130(1) != 0)
        return 0xFFFFFFFFu;
    slot = D_0024FF0C[0]->fB4 + 1;
    if (slot == -1)
        slot = 0;
    return slot;
}
