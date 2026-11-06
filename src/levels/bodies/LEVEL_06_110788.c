struct PoolEntry {
    int first;
    int second;
    unsigned int id;
};

extern struct PoolEntry D_001F59B0[];
extern unsigned int D_001F5A70;
extern void func_110770(struct PoolEntry *);

struct PoolEntry *func_110788(void)
{
    int index;
    for (index = 0; index < 16; index++) {
        struct PoolEntry *entry = &D_001F59B0[index];
        if (entry->id == 0xffffffffu) {
            unsigned int generation;
            func_110770(entry);
            generation = D_001F5A70;
            D_001F5A70 = generation + 1;
            entry->id = (generation << 8) | index;
            return entry;
        }
    }
    return 0;
}
