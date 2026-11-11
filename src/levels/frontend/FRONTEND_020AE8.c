/* FRONTEND:0x020AE8 -- polls the shared queue and reports the next slot. */
struct Entry {
    char pad00[0xB4];
    int fB4;
};

extern struct Entry *D_00032814[];

int func_0205B8(int);

unsigned int func_020AE8(void)
{
    struct Entry *entry;
    int slot;

    entry = D_00032814[0];
    if (entry == 0)
        return 0xFFFFFFFFu;
    if (func_0205B8(1) != 0)
        return 0xFFFFFFFFu;
    slot = D_00032814[0]->fB4 + 1;
    if (slot == -1)
        slot = 0;
    return slot;
}
