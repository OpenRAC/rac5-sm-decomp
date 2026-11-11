struct PoolEntry {
    int first;
    int second;
    unsigned int id;
};

extern struct PoolEntry D_001B5A40[];
extern unsigned int D_001B5B00;
extern void func_0FAAB8(struct PoolEntry *);

struct PoolEntry *func_0FAAD0(void)
{
    int index;
    for (index = 0; index < 16; index++) {
        struct PoolEntry *entry = &D_001B5A40[index];
        if (entry->id == 0xffffffffu) {
            unsigned int generation;
            func_0FAAB8(entry);
            generation = D_001B5B00;
            D_001B5B00 = generation + 1;
            entry->id = (generation << 8) | index;
            return entry;
        }
    }
    return 0;
}
