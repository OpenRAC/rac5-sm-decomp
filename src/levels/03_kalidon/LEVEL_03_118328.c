struct PoolEntry {
    int first;
    int second;
    unsigned int id;
};

extern struct PoolEntry D_0021F430[];
extern unsigned int D_0021F4F0;
extern void func_118310(struct PoolEntry *);

struct PoolEntry *func_118328(void)
{
    int index;
    for (index = 0; index < 16; index++) {
        struct PoolEntry *entry = &D_0021F430[index];
        if (entry->id == 0xffffffffu) {
            unsigned int generation;
            func_118310(entry);
            generation = D_0021F4F0;
            D_0021F4F0 = generation + 1;
            entry->id = (generation << 8) | index;
            return entry;
        }
    }
    return 0;
}
