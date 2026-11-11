struct Entry {
    char pad00[0xB4];
    int fB4;
};

extern struct Entry *D_0015B9AC[];

int func_0F1AC0(int);

unsigned int func_0F1FF0(void)
{
    struct Entry *entry;
    int slot;

    entry = D_0015B9AC[0];
    if (entry == 0)
        return 0xFFFFFFFFu;
    if (func_0F1AC0(1) != 0)
        return 0xFFFFFFFFu;
    slot = D_0015B9AC[0]->fB4 + 1;
    if (slot == -1)
        slot = 0;
    return slot;
}
