struct Entry {
    char pad00[0xB4];
    int fB4;
};

extern struct Entry *D_001F60CC[];

int func_12E570(int);

unsigned int func_12EAA0(void)
{
    struct Entry *entry;
    int slot;

    entry = D_001F60CC[0];
    if (entry == 0)
        return 0xFFFFFFFFu;
    if (func_12E570(1) != 0)
        return 0xFFFFFFFFu;
    slot = D_001F60CC[0]->fB4 + 1;
    if (slot == -1)
        slot = 0;
    return slot;
}
