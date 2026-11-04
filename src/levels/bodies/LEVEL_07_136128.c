struct Entry {
    char pad00[0xB4];
    int fB4;
};

extern struct Entry *D_0021B34C[];

int func_135BF8(int);

unsigned int func_136128(void)
{
    struct Entry *entry;
    int slot;

    entry = D_0021B34C[0];
    if (entry == 0)
        return 0xFFFFFFFFu;
    if (func_135BF8(1) != 0)
        return 0xFFFFFFFFu;
    slot = D_0021B34C[0]->fB4 + 1;
    if (slot == -1)
        slot = 0;
    return slot;
}
