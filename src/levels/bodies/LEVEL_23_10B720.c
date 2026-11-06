struct PoolEntry {
    int first;
    int second;
    unsigned int id;
};

extern struct PoolEntry D_001DA1B0[];
extern unsigned int D_001DA270;
extern void func_10B708(struct PoolEntry *);

struct PoolEntry *func_10B720(void)
{
    int index;
    for (index = 0; index < 16; index++) {
        struct PoolEntry *entry = &D_001DA1B0[index];
        if (entry->id == 0xffffffffu) {
            unsigned int generation;
            func_10B708(entry);
            generation = D_001DA270;
            D_001DA270 = generation + 1;
            entry->id = (generation << 8) | index;
            return entry;
        }
    }
    return 0;
}
