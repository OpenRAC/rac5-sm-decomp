struct PoolEntry {
    int first;
    int second;
    unsigned int id;
};

extern struct PoolEntry D_001B5D40[];
extern unsigned int D_001B5E00;
extern void func_0F90C8(struct PoolEntry *);

struct PoolEntry *func_0F90E0(void)
{
    int index;
    for (index = 0; index < 16; index++) {
        struct PoolEntry *entry = &D_001B5D40[index];
        if (entry->id == 0xffffffffu) {
            unsigned int generation;
            func_0F90C8(entry);
            generation = D_001B5E00;
            D_001B5E00 = generation + 1;
            entry->id = (generation << 8) | index;
            return entry;
        }
    }
    return 0;
}
