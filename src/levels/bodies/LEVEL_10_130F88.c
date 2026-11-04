struct Entry {
    char pad00[0xB4];
    int fB4;
};

extern struct Entry *D_0020FCAC[];

int func_130A58(int);

unsigned int func_130F88(void)
{
    struct Entry *entry;
    int slot;

    entry = D_0020FCAC[0];
    if (entry == 0)
        return 0xFFFFFFFFu;
    if (func_130A58(1) != 0)
        return 0xFFFFFFFFu;
    slot = D_0020FCAC[0]->fB4 + 1;
    if (slot == -1)
        slot = 0;
    return slot;
}
