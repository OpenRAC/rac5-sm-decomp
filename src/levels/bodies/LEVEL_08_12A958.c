struct PoolEntry {
    int first;
    int second;
    unsigned int id;
};

extern struct PoolEntry D_0024FC70[];
extern unsigned int D_0024FD30;
extern void func_12A940(struct PoolEntry *);

struct PoolEntry *func_12A958(void)
{
    int index;
    for (index = 0; index < 16; index++) {
        struct PoolEntry *entry = &D_0024FC70[index];
        if (entry->id == 0xffffffffu) {
            unsigned int generation;
            func_12A940(entry);
            generation = D_0024FD30;
            D_0024FD30 = generation + 1;
            entry->id = (generation << 8) | index;
            return entry;
        }
    }
    return 0;
}
