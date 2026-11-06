struct PoolEntry {
    int first;
    int second;
    unsigned int id;
};

extern struct PoolEntry D_00165D90[];
extern unsigned int D_00165E50;
extern void func_0F4660(struct PoolEntry *);

struct PoolEntry *func_0F4678(void)
{
    int index;
    for (index = 0; index < 16; index++) {
        struct PoolEntry *entry = &D_00165D90[index];
        if (entry->id == 0xffffffffu) {
            unsigned int generation;
            func_0F4660(entry);
            generation = D_00165E50;
            D_00165E50 = generation + 1;
            entry->id = (generation << 8) | index;
            return entry;
        }
    }
    return 0;
}
