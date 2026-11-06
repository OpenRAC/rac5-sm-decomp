struct PoolEntry {
    int first;
    int second;
    unsigned int id;
};

extern struct PoolEntry D_00116FA0[];
extern unsigned int D_00117060;
extern void func_0D36F0(struct PoolEntry *);

struct PoolEntry *func_0D3708(void)
{
    int index;
    for (index = 0; index < 16; index++) {
        struct PoolEntry *entry = &D_00116FA0[index];
        if (entry->id == 0xffffffffu) {
            unsigned int generation;
            func_0D36F0(entry);
            generation = D_00117060;
            D_00117060 = generation + 1;
            entry->id = (generation << 8) | index;
            return entry;
        }
    }
    return 0;
}
