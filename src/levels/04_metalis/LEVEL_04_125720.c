struct PoolEntry {
    int first;
    int second;
    unsigned int id;
};

extern struct PoolEntry D_002201D0[];
extern unsigned int D_00220290;
extern void func_125708(struct PoolEntry *);

struct PoolEntry *func_125720(void)
{
    int index;
    for (index = 0; index < 16; index++) {
        struct PoolEntry *entry = &D_002201D0[index];
        if (entry->id == 0xffffffffu) {
            unsigned int generation;
            func_125708(entry);
            generation = D_00220290;
            D_00220290 = generation + 1;
            entry->id = (generation << 8) | index;
            return entry;
        }
    }
    return 0;
}
