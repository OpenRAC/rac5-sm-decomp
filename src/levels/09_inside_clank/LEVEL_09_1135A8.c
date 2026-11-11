struct PoolEntry {
    int first;
    int second;
    unsigned int id;
};

extern struct PoolEntry D_001F08B0[];
extern unsigned int D_001F0970;
extern void func_113590(struct PoolEntry *);

struct PoolEntry *func_1135A8(void)
{
    int index;
    for (index = 0; index < 16; index++) {
        struct PoolEntry *entry = &D_001F08B0[index];
        if (entry->id == 0xffffffffu) {
            unsigned int generation;
            func_113590(entry);
            generation = D_001F0970;
            D_001F0970 = generation + 1;
            entry->id = (generation << 8) | index;
            return entry;
        }
    }
    return 0;
}
