struct PoolEntry {
    int first;
    int second;
    unsigned int id;
};

extern struct PoolEntry D_0021B0B0[];
extern unsigned int D_0021B170;
extern void func_11D1F0(struct PoolEntry *);

struct PoolEntry *func_11D208(void)
{
    int index;
    for (index = 0; index < 16; index++) {
        struct PoolEntry *entry = &D_0021B0B0[index];
        if (entry->id == 0xffffffffu) {
            unsigned int generation;
            func_11D1F0(entry);
            generation = D_0021B170;
            D_0021B170 = generation + 1;
            entry->id = (generation << 8) | index;
            return entry;
        }
    }
    return 0;
}
