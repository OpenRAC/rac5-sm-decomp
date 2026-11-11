struct Entry {
    char pad00[0xB4];
    int fB4;
};

extern struct Entry *D_0021F6CC[];

int func_130FC0(int);

unsigned int func_1314F0(void)
{
    struct Entry *entry;
    int slot;

    entry = D_0021F6CC[0];
    if (entry == 0)
        return 0xFFFFFFFFu;
    if (func_130FC0(1) != 0)
        return 0xFFFFFFFFu;
    slot = D_0021F6CC[0]->fB4 + 1;
    if (slot == -1)
        slot = 0;
    return slot;
}
