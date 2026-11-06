struct PoolEntry {
    int first;
    int second;
    unsigned int id;
};

extern struct PoolEntry D_001D7A30[];
extern unsigned int D_001D7AF0;
extern void func_110408(struct PoolEntry *);

struct PoolEntry *func_110420(void)
{
    int index;
    for (index = 0; index < 16; index++) {
        struct PoolEntry *entry = &D_001D7A30[index];
        if (entry->id == 0xffffffffu) {
            unsigned int generation;
            func_110408(entry);
            generation = D_001D7AF0;
            D_001D7AF0 = generation + 1;
            entry->id = (generation << 8) | index;
            return entry;
        }
    }
    return 0;
}
