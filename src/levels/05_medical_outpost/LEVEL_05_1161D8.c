struct PoolEntry {
    int first;
    int second;
    unsigned int id;
};

extern struct PoolEntry D_001F5E30[];
extern unsigned int D_001F5EF0;
extern void func_1161C0(struct PoolEntry *);

struct PoolEntry *func_1161D8(void)
{
    int index;
    for (index = 0; index < 16; index++) {
        struct PoolEntry *entry = &D_001F5E30[index];
        if (entry->id == 0xffffffffu) {
            unsigned int generation;
            func_1161C0(entry);
            generation = D_001F5EF0;
            D_001F5EF0 = generation + 1;
            entry->id = (generation << 8) | index;
            return entry;
        }
    }
    return 0;
}
