struct PoolEntry {
    int first;
    int second;
    unsigned int id;
};

extern struct PoolEntry D_00032608[];
extern unsigned int D_000326C8;
extern void func_01E2D8(struct PoolEntry *);

struct PoolEntry *func_01E2F0(void)
{
    int index;
    for (index = 0; index < 16; index++) {
        struct PoolEntry *entry = &D_00032608[index];
        if (entry->id == 0xffffffffu) {
            unsigned int generation;
            func_01E2D8(entry);
            generation = D_000326C8;
            D_000326C8 = generation + 1;
            entry->id = (generation << 8) | index;
            return entry;
        }
    }
    return 0;
}
